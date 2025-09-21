//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int factorial(int n) {
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a integer: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int ans = factorial(n);
        cout << "Factorial of " << n << " is " << ans << endl;
    }

    return 0;

}

/* OUTPUT
Enter a integer: 4
Factorial of 4 is 24
*/
