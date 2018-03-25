#include<iostream>
#include<stdio.h>
using namespace std;
main(){
    double ar[5] = {4,4.5,5,2,1.5};
    int code, quantity;

    cin >> code >> quantity;

    printf("Total: R$ %.2lf", ar[code-1]*quantity);

    cout << endl;
    return 0;
}
