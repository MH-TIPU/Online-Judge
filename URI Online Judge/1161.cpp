#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    long long  int a,b,i;
    while(scanf("%lld %lld", &a,&b) != EOF){
            long long int  sum1 = 1, sum2 = 1;
            for( i = 1; i<=a; i++){
                sum1 *= i;
            }

            for( i = 1; i<=b; i++){
                sum2 *= i;
            }
            cout << sum1 + sum2 << endl;
    }
}
