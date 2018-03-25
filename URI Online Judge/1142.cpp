#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int ar[3]= {a,b,c};
    for(int i = 0; i<3;i++){
        for(int j =0; j <3; j++){
            if(ar[i] < ar[j]){

                int temp;

                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    for(int i = 0; i< 3; i++){
        cout << ar[i] << endl;
    }
    cout << endl;

    cout << a << endl << b << endl << c << endl;

    return 0;
}
