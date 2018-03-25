#include<iostream>
#include<stdio.h>
using namespace std;

main(){

    int a,b,c;
    cin >> a >> b >> c;
    if (a>b && a>c){
        cout << a <<" eh o maior";
    }
    else if (b>a && b>c){

        cout << b <<" eh o maior";
    }
    else if (c>a && c>b)
        cout <<c <<" eh o maior";

    cout << endl;

    return 0;
}



