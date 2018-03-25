#include<iostream>
using namespace std;

main()
{
    int n;

    cin>> n;
    int i;

    if(n %2 == 0)
    {
        n +=1;
    }

    for(i=0; i<12;i= i+2)
    {
        cout << n+i << endl;
    }

    return 0;
}
