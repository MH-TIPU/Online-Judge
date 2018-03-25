#include<iostream>
using namespace std;

main()
{
    int n;
    int num;
    cin >> n;

    for (int i = 0; i< n;i++){
        cin>> num;
        if(num== 0){
            cout << "NULL" << endl;
        }
        else if(num < 0){
            if(num%2 == 0){
                cout << "EVEN NEGATIVE" << endl;
            }
            else{
                cout << "ODD NEGATIVE" << endl;
            }
        }
        else{
            if(num%2 == 0){
                cout << "EVEN POSITIVE" << endl;
            }
            else{
                cout << "ODD POSITIVE" << endl;
            }
        }
    }

    return 0;
}

