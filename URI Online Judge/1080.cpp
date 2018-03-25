#include<iostream>
using namespace std;

main()
{
    int arr[100];
    int big = -10000000;
    int position;
    for(int i=0; i< 100; i++){
        cin >> arr[i];
        if(arr[i] > big){
            big = arr[i];
            position = i+1;
        }
    }

    cout << big << endl << position << endl;


    return 0;
}
