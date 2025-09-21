//Abhinav Rakhunde
//PRN:24070123001   

#include<iostream>
using namespace std;

int main () {
    float n1,n2,result;
    cout<<"Enter values of number 1 & 2:";
    cin>>n1>>n2;

    try {
        if(n2==0) {
            throw n2;
        }
        else {
            result=n1/n2;
            cout<<"Result: "<<result<<endl;
        }
    }
    catch(float x) {
        cout<<"Exception caught: Division by zero is not allowed.";
    }
}
/* OUTPUT:
Enter values of number 1 & 2:5 0
Exception caught: Division by zero is not allowed.
*/