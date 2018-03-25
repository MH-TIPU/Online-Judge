#include<stdio.h>
#include<iostream>
using namespace std;

main()
{
    bool i = true;
    double arr[2] = {0};
    int key =0;
   do{
        double k;
        cin >> k;
        if (k > 0 && k < 10.01){
            arr[key]  = k;
            key++;
            if(key== 2)
                i = false;
        }
        else
            cout << "nota invalida" << endl;

   }
while(i);
   printf("media = %.2lf  ", (arr[0]+arr[1])/2);
   cout << endl;

return 0;
}

