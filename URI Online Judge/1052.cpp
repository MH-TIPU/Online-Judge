#include<iostream>
using namespace std;

main()
{
    int n;

    cin>> n;

    string month[] = {"January","February","March","April","May","June","July","August","September","October", "November", "December"};

    cout << month[n-1];
    cout << endl;


    return 0;
}
