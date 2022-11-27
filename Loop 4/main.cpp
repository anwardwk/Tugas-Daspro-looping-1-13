#include <iostream>

using namespace std;

int main()
{
    int jmlh = 0;
    float rata_rata;
    for(int i = 1; i <= 20; i++){
        jmlh = jmlh + i;
        rata_rata = jmlh / i;
        cout << i << endl;
    }
    cout << endl;
    cout << "jumla :" << jmlh << endl;
    cout << "Rata-rata :" << rata_rata << endl;
    return 0;
}
