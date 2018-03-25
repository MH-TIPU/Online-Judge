#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

        double n;
        scanf("%lf", &n);
        double ar[100];

        for ( int i = 0; i< 100 ;i++){
            ar[i] = n;

            n= n/2;
        }

        for(int i = 0 ; i< 100;i++){
            cout << "N[" << i <<"] = ";
            printf("%.4lf\n",ar[i]);
        }


    return 0;
}

