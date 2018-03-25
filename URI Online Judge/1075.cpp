#include<iostream>
using namespace std;

main()
{
    int n;

    cin>> n;
    cout << 2 << endl;

    for(int i=n; i<= 10000; i++)
    {
        if(i%n==0)
        {
            cout << i+2 << endl;
        }
    }


    return 0;
}

