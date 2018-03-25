#include<iostream>
using namespace std;

main()
{
    bool i = true;
    int arr[3] = {0};

   while(i){
        int k;
        cin >> k;

        if (k > 0 && k < 5){
            if(k == 1)
                arr[0]++;

            else if(k == 2)
                arr[1]++;

            else if(k == 3)
                arr[2]++;

            else if(k == 4)
               i = false;

        }

   }

        cout << "MUITO OBRIGADO" << endl;
        cout <<"Alcool: " << arr[0] << endl;
        cout <<"Gasolina: " << arr[1] << endl;
        cout <<"Diesel: " << arr[2] << endl;

return 0;
}

