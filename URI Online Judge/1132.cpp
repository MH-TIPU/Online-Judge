#include<iostream>

using namespace std;

int main()
{

    int s;
    int t;
    int sum = 0;

    int i,j;

    cin >> s >> t;



    if(s > t){
         i = t;
         j = s;
    }
    else {
         i = s;
         j = t;
    }

    for (i; i<= j; i++){
        if(i%13 != 0){
            sum += i;
        }
    }





    cout <<  sum << endl;

    return 0;

}


