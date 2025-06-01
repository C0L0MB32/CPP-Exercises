/*
Context: You are helping develop a budgeting app for students. The first requirement is a feature that lets users add two expenses together and see the total cost.
Your Task: Ask the user for two floating-point numbers (to represent prices), then print the sum with two decimal places, labeled clearly.
Goal: Practice using float and formatted output.
*/

#include<iostream>
#include <iomanip> // this library is used just to set precision on float values

using namespace std;

int main(){
    // Define 2 float variables for prices and one for the result
    float firstCost, secondCost, totalCost;
    //Let say the student purshase 2 things today, so we are going to ask for those 2 prices
    cout << "Write the price of the 1rs thing you buy today: " << endl << ">> ";
    cin >> firstCost;
    cout << "Write the price of the 2nd thing you buy today: " << endl << ">> ";
    cin >> secondCost;

    //We sum these two prices and print them
    totalCost = firstCost+secondCost;
    // We ensure only 2 decimal places
    cout << fixed << setprecision(2); 
    cout << "You spent $" << totalCost << " today. That's not good, my boy." << endl;
    return 0;
}