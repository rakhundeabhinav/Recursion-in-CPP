//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

void checkVowel(char ch) {
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        throw ch;
    cout << ch << " is a vowel." << endl;
}

int main() {
    char input;
    cout << "Enter a lowercase character: ";
    cin >> input;

    try {
        checkVowel(input);
    } catch (char c) {
        cout << "Exception: '" << c << "' is not a vowel." << endl;
    }

    return 0;
}

/*OUTPUT:
Enter a lowercase character: s
Exception: 's' is not a vowel.
*/