#include<iostream>
#include<map>
using namespace std;
int main(){
    map <string, double> dayTemps;
    dayTemps["Sunday"] = 8.5;
    dayTemps["Monday"] = 10.5;
    dayTemps["Tuesday"] = 12.50;
    dayTemps["Wednesday"] = 15.30;
    dayTemps["Thursday"] = 20;
    dayTemps["Friday"] = 25;
    dayTemps["Saturday"] = 1;

    map <string, char> dayWeather;
    dayWeather["Sunday"] = 'R';
    dayWeather["Monday"] = 'S';
    dayWeather["Tuesday"] = 'S';
    dayWeather["Wednesday"] = 'R';
    dayWeather["Thursday"] = 'C';
    dayWeather["Friday"] = 'R';
    dayWeather["Saturday"] = 'C';

    double sum = 0;

    for (auto x: dayTemps){
        string day = x.first;
        double temp = x.second;
        char weather = dayWeather[day];

        cout<< day << " : " << temp << "°C, ";
        if (weather == 'S') cout<< " Sunny";
        else if (weather == 'R') cout << " Rainy";
        else if (weather == 'C') cout << " Cloudy";
        cout << endl;
        sum += temp;
    }
    
    double average = sum /dayTemps.size();
    cout << "Average temperature: "<< average << "°C" << endl;

    

    return 0;
}


 