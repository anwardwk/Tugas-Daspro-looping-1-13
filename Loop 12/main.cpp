#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "-------------------------------" << endl;
    cout << "celcius -------------fahrenheit" << endl;
    cout << "-------------------------------" << endl;
    double celcius;
    double fahrenheit;
    for(celcius = 0; celcius <= 100; celcius++){
        fahrenheit = celcius * 9/5 + 32;
        cout << celcius << "          " << " || " << fahrenheit << endl;
    }

    return 0;
}
