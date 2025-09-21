//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int Sum(int n) {
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = Sum(n);
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}

/*OUTPUT:
Enter a number: 4
Sum of numbers from 1 to 4 is: 10
*/