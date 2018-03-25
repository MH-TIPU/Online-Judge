#include<iostream>
#include<stdio.h>
using namespace std;

main(){

   int a;
   cin >> a;
   cout << a/365 << " ano(s)" << endl;
   cout << (a%365)/30<< " mes(es)" << endl;
   cout << (a%365)%30<< " dia(s)" << endl;

    return 0;
}


