#include<iostream>
using namespace std;

main()
{

    while(true){
        int a,b;
        cin >> a >> b;

        if(a == 0 || b == 0){
            return 0;
        }
        else if( a > 0 && b > 0){
            cout << "primeiro" << endl;
        }
        else if( a > 0 && b < 0){
            cout << "quarto" << endl;
        }
        else if( a < 0 && b < 0){
            cout << "terceiro" << endl;
        }
        else if( a < 0 && b > 0){
            cout << "segundo" << endl;
        }

}
return 0;

}
