/*
Context: You’re building a mini-game for a brain training app. It presents users with simple random additions to solve under mental pressure. Your Task: Generate two random integers between 10 and 99. Display them and ask the user to type the result. Check if the answer is correct.
Bonus: Use ctime and cstdlib for randomness.
Goal: Practice random number generation, conditionals, and input/output.
*/

#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Declare two integers to store the random values and one for answer
    int randomOne = 0, randomTwo = 0, answer;

    // Initialize the random seed using the current time
    srand(time(NULL));

    // Generate two random numbers between 10 and 99
    randomOne = rand() % 90 + 10; // (0 to 89) + 10 => 10 to 99
    randomTwo = rand() % 90 + 10;

    // Ask the user to solve the addition
    cout << randomOne << " + " << randomTwo << " = ";
    cin >> answer;

    // Check if the user's answer is correct
    if (answer == (randomOne + randomTwo)) {
        cout << "The answer " << answer << " is correct!!" << endl;
    } else {
        cout << "The answer " << answer << " is not correct :(" << endl;
    }

    return 0;
}