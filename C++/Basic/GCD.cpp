/*greatest common divisor ber korbo hocce just big element theke small element ta minus ko re dibo then a!=b na howa porjonto ey loop cholbe */
/* tai last e a return or b return kora same because a and b 2 tai soman hole loop theke ber hobe */

#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}
