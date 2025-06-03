/*
Context: In a turn-based game, some characters can only take action on even-numbered turns.
Your Task: Write a program that asks for the current turn number (as an integer), and prints whether it’s an “Action Turn” or a “Wait Turn.”
Goal: Learn how to use conditional logic and the modulus operator.
*/

#include<iostream>

using namespace std;

int main(){
    // We define a integer
    int turn;

    cout << "Enter your current turn number: " << ">> ";
    cin >> turn;

    // Check if the turn number is odd using the modulus operator
    // If the remainder of turn divided by 2 is not zero, it's an odd number
    if ((turn % 2) != 0)
    {
        cout << "Action turn" <<endl;
    }else{
        cout << "Wait turn" << endl;
    }
    

    return 0;
}