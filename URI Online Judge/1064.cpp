#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int count = 0;
    float sum = 0;
    float number;

    for ( int i = 0; i < 6; i++){
        cin >> number;
        if(number >0){
            count ++;
            sum += number;
        }
    }

    cout << count << " valores positivos" << endl;
    printf("%.1f\n", sum/count);
    return 0;
}



