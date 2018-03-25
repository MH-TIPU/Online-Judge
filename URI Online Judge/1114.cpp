#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    int ps;
    for(;;){
        cin >> ps;
        if(ps!=2002){
            cout << "Senha Invalida" << endl;
        }
        else{
            cout << "Acesso Permitido" << endl;
            return 0;
        }
    }


    return 0;
}





