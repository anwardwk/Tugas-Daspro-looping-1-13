#include <iostream>

using namespace std;

int main()
{
    cout << "Program ini akan berhenti jika anda memasukkan angka -99" << endl;
    int a;
    while(true){
        cout << "Masukkan nilai anda :" << endl;
        cin >> a;
        if (a == -99){
            cout << endl;
            cout << "Program keluar karena anda memasukkan angka -99" << endl;
            break;
        }
    }
    return 0;
}
