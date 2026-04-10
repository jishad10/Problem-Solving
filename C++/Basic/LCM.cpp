#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    while(a != b) {
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);  // LCM formula
}

int main() {
    int a, b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "The GCD of " << a << " & " << b << " is: " << gcd(a,b) << endl;
    cout << "The LCM of " << a << " & " << b << " is: " << lcm(a,b) << endl;

    return 0;
}
