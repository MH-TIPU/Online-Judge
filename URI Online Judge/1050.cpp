#include<iostream>
using namespace std;

main()
{
    int code;
    cin >> code;

    int ar[8]= {61,71,11,21,32,19,27,31};
    string arr[8] = {"Brasilia","Salvador","Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria","Belo Horizonte"};

    for(int i=0;i< 8;i++){
        if(ar[i] == code){
            cout << arr[i] << endl;
            return 0;
        }
    }
    cout << "DDD nao cadastrado" << endl;
    return 0;
}
