/*
Context: A simple login interface is needed for an internal tool. Only one user (“admin”) with password “1234” is allowed.
Your Task: Ask for a username and password. If both match, print “Access granted.” Otherwise, print “Invalid credentials.”
Goal: Work with string comparison and cin.
*/

#include<iostream>

using namespace std;

int main(){
    //Lets define 2 variables, both need to be strings
    string username, password;

    cout << "Welcome to your personal page, introduce your credetnials: "<<endl ;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    // Lets check if the username and the password are the ones that we chjose for our login
    if (username == "Colombez" && password== "SuperSecretPassword")
    {
        cout << "Welcome back, Colombez"<<endl;
    }else{
        cout << "Incorrect Username or password"<<endl;
    }
    

    return 0;
}