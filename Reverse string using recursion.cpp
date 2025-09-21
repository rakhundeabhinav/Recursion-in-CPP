//Abhinav RAkhunde
//PRN:24070123001

#include <iostream>
using namespace std;

void printrev(char* str) {
    if (*str != '\0') {
    printrev(str + 1);
    cout << *str; 
    }          
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin >> input;

    cout << "Reversed string: ";
    printrev(input);
    cout << endl;

    return 0;
}

/* OUTPUT:
Enter a string: Abhinav
Reversed string: vanihbA
*/