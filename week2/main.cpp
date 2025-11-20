#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <iomanip>

using namespace std;

class WeatherStation {
private:
    string location;
    vector<float> readings;

public:
    WeatherStation(const string& loc)
        : location(loc) {}

    void addReading(float value) {
        readings.push_back(value);
    }

    void printReadings() const {
        cout << "Location: " << location << "\nReadings: ";
        for (float r : readings)
            cout << r << " ";
        cout << "\n";
    }

    template <typename T>
    T average() const {
        if (readings.empty())
            throw runtime_error("No readings to calculate average!");

        T sum = 0;
        for (float r : readings)
            sum += r;

        return sum / static_cast<T>(readings.size());
    }

    void saveToFile(const string& filename) const {
        ofstream file(filename);
        if (!file)
            throw ios_base::failure("Error opening file for writing!");

        for (float r : readings)
            file << r << "\n";
    }

    static WeatherStation loadFromFile(const string& filename, const string& loc) {
        WeatherStation ws(loc);
        ifstream file(filename);

        if (!file)
            throw ios_base::failure("Error opening file for reading!");

        float value;
        while (file >> value)
            ws.addReading(value);

        return ws;
    }

    void sortReadings() {
        sort(readings.begin(), readings.end());
    }

    int countAbove(float threshold) const {
        return count_if(readings.begin(), readings.end(),
                        [threshold](float r) { return r > threshold; });
    }
};

int main() {
    try {
        WeatherStation lahti("Lahti");

        lahti.addReading(22.5);
        lahti.addReading(24.0);
        lahti.addReading(26.3);
        lahti.addReading(21.8);
        lahti.addReading(25.7);

        lahti.sortReadings();
        lahti.printReadings();

        double avg = lahti.average<double>();
        cout << fixed << setprecision(2)
             << "Average: " << avg << "\n";

        int above25 = lahti.countAbove(25.0);
        cout << "Readings above 25°C: " << above25 << "\n";

        string filename = "./lahti_readings.txt";
        lahti.saveToFile(filename);
        cout << "Saved to file: " << filename << "\n";

        WeatherStation reconstructed = WeatherStation::loadFromFile(filename, "Lahti");

        cout << "\nReconstructed from file:\n";
        reconstructed.printReadings();
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
