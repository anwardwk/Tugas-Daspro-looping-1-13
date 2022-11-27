#include <iostream>

using namespace std;

int main()
{
    int jumlah = 0;
    int bil;
    cout << "Input Bilangan : ";
        cin >> bil;
        do{
            cout << bil << endl;
            jumlah += 1;
            cout << "Input Bilangan : ";
            cin >> bil;
        }
        while( bil != 9999);
        cout << "Jumlah angka =" << jumlah << endl;
    return 0;
}
