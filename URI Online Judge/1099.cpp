#include<iostream>

using namespace std;

main()
{
    int n;
    int sml,big;
    cin >> n;
    for(int i = 0; i <n ;i++){
        int a,b;
        cin >> a >> b;
        if(a> b){
                sml = b;
                big = a;
            }
            else {
                sml = a;
                big = b;
            }
            int sum = 0;
         for( int j = sml+1; j < big; j++){
            if(j%2==1){
                sum +=j;
            }
         }

         cout << sum << endl;
    }
    return 0;
}
