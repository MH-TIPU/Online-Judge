#include<iostream>
#include<stdio.h>
using namespace std;

main(){

   int a,b;
   cin >> a >> b;

    int c = 12 - a + 12 +b;
    if (c<=24){
        printf("O JOGO DUROU %d HORA(S)",c);
    }
    else
        printf("O JOGO DUROU %d HORA(S)",c-24);

        cout << endl;

    return 0;
}


