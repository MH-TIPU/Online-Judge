#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int n;
    double a,b,c;
    cin >> n;
    for(int i = 0; i< n;i++)
    {
            cin >> a >> b >> c;
            double r =  (a*2+b*3+c*5) / 10;
            printf("%.1lf",r);
            cout << endl;
    }


    return 0;
}

