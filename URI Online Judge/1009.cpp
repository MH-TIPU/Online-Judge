#include<iostream>
#include<stdio.h>
using namespace std;

main(){

    string name;
    double a,b;

    cin >> name >> a >> b;

    printf("TOTAL = R$ %.2lf",a + (b*15)/100);

    cout << endl;

    return 0;
}

