#include<iostream>
#include<stdio.h>
using namespace std;

main(){

    double a1,a2,a3,b1,b2,b3;

    cin >>a1 >>a2 >>a3 >>b1 >>b2 >> b3;

    printf("VALOR A PAGAR: R$ %.2lf", a2*a3 +b2*b3);

    cout << endl;

    return 0;
}

