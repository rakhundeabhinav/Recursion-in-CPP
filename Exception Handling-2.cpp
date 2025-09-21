//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    float age;
    cout << "Enter your age: ";
    cin >> age;
    try {
        if (age < 0) {
            throw age;
        } else {
            cout << "Your age is: " << age << endl;
        }
    }
    catch (float x) {
        cout << "Exception caught: Age cannot be negative." << endl;
    }   
}
/* OUTPUT:
Enter your age: -5
Exception caught: Age cannot be negative.
*/