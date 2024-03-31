/*
jemon 546 tk er modde koi ti 100 tk ,koi ti 50 tk,.....
*/

#include<iostream>
using namespace std;
int main ()
{
    int amount;
    cout<<"Enter the Amount : "<<endl;
    cin>>amount;

    int num =1;
    int note;
    switch (num){
        case 1:
        {
            note = amount/100;
            amount = amount - (100 * note);
            cout<<note<<" Tk.100 note requied"<<endl;
        }
        case 2:
        {
            note = amount/50;
            amount = amount - (50 * note);
            cout<<note<<" Tk.50 note requied"<<endl;
        }
        case 3:
        {
            note = amount/20;
            amount = amount - (20 * note);
            cout<<note<<" Tk.20 note requied"<<endl;
        }
        case 4:
        {
            note = amount/1;
            amount = amount - (1 * note);
            cout<<note<<" Tk.1 note requied"<<endl;
        }
    }
}
