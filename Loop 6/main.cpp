#include <iostream>

using namespace std;

int main()
{
    int val, max, min;

    cout << "program ini akan berhenti jika anda menginput angka -99 \n" << endl;

    while (true)
    {
     //input
     cout << "masukkan Nilai anda :" ;
     cin >> val;

     // looping stop jika -99
     if ( val == -99){
        break;
     }

     if (val != -99){
        if(max < val){
            max = val;
        }
        if(min > val){
            min = val;
        }
     }
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    return 0;
}
