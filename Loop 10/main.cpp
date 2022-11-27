#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    for(int x = 1; x <= 7; x++){
        cout << "Looping yang ke -" << x << endl;
        for (int y = 1; y <= 10; y++){
            cout << "- Angka : " << y << " - ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
