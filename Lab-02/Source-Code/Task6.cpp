#include<iostream>
using namespace std;
int main(){
    double subtotal = 12.95+24.95+6.95+14.95+3.95;
    double tax = subtotal*0.06;
    double total = subtotal+tax;
    cout << subtotal << endl;
    cout << tax << endl;
    cout << total;
    return 0;
}