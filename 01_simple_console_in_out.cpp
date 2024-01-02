/*
A simple c++ console stand alone programme that receives input from user and write result to console.
*/

// import the built in module (revert to this later as header files) that allows communication with the user
#include <iostream>

// by declaring a namespace we will (at least later on) avoid confusion when there are multiple instances
// of the same function or method. Stay tuned.
using namespace std;
int main() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
return 0; }

// Test the code is syntatically correct
// run -> start debugging -> if no errors it should be workable
// alternatively press drop down next to arrow top right and choose debug

// finally we must compile the to be an executable file

// see https://code.visualstudio.com/docs/cpp/config-clang-mac
// after compilating you will see an exe file with same name as the source code but without the '.cpp'.
// this can be moved to your desired destination and run independently.

// when we work with executables we must be certain that the programme stays alive until the user
// decides otherwise -> what happens if one enter a char or a double instead of an integer?