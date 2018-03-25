#include<iostream>

using namespace std;

main()
{
    int a,b;
    bool i = true;
    while (i){
            int sml,big;
        cin >> a >> b;
        if(a < 1 || b < 1){
            i = false;
        }
        else{
            if(a> b){
                sml = b;
                big = a;
            }
            else {
                sml = a;
                big = b;
            }
            int sum = 0;
            for(int j = sml; j <= big ; j++){
                cout << j << " ";
                sum +=j;
            }
            cout << "Sum=" <<sum << endl;

        }
    }
    return 0;
}
