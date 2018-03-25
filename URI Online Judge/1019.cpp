#include<iostream>

using namespace std;

main()
{

    int s;

    cin >> s;

    int hour = s / 3600;
    int mi = (s % 3600)/60;
    int sec = (s %60);





    cout <<  hour <<":" << mi << ":" << sec << endl;

}

