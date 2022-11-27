#include <iostream>

using namespace std;

int main()
{
    int jumlah = 0;
    int bil;
    int sum = 0;
    cout << "Input Bilangan :";
    cin >> bil;
    do{
        cout << bil << endl;
        jumlah += 1;
        sum += bil;
        cout << "Input bilangan :";
        cin >> bil;
    }
     while(bil != 9999);
     cout << "Jumlah cacah angka =" << jumlah << endl;
     cout << "Jumlah bilangan :" << sum;

    return 0;
}
