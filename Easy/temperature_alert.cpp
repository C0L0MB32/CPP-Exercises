/*
Context: You’re building a basic weather alert system for a greenhouse. If the temperature falls below 10°C or goes above 35°C, it should trigger an alert.
Your Task: Ask the user to input the current temperature, then print either “Temperature is safe” or “ALERT: Temperature out of range!”
Goal: Practice if-else logic and working with thresholds.
*/

#include<iostream>

using namespace std;

int main(){
    //We define a float variable
    float temperature;
    cout << "Enter the room temperature: ";
    cin >> temperature;

    // Check if the temperature is between 10.0 and 35.0 degrees, and if it is, we print that is safe
    if (temperature<35.0f && temperature>10.0f){
        cout << "Temperature is safe" << endl;
    }else{
        // If its not, then we print that is out of range
        cout << "ALERT: Temperature out of range!" << endl;
    }

    return 0;
}