#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int main(){
    //days in string 
    vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    // temperature in double
    vector<double> temperatures = {8.5, 10.5, 12.50, 15.30, 20, 25, 1};
    //initializing tuple
    tuple < string, double> warmestDay = make_tuple(days[0], temperatures[0]);
    //loop for days and temperature
    for (size_t i = 0; i < days.size(); i++ ){
        cout << days[i] << ":" << temperatures[i] << "°C -";
        if (temperatures[i] < 10){
            cout << "Cold";
        }
        else if (temperatures[i] <= 20){
            cout << "Ok";
        }
        else{
            cout << "Warm";
        }
        cout << endl;

        if (temperatures[i] > get<1>(warmestDay)){
            warmestDay= make_tuple(days[i], temperatures[i]);
        }
    }
    cout<< "Warmest Day: " << get<0>(warmestDay) << " with " << get<1>(warmestDay)<< "°C" << endl;
    
    return 0;
}