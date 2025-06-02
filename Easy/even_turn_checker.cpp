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