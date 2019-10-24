#include <iostream>

using namespace std;

int main()
{
    long bolivary, PLN, EUR, PLN2;
    cout << "Podaj ile masz bolivarow :"; 
    cin >> bolivary;
    PLN = bolivary/65038.54;
    cout << "Masz :" << PLN << "PLN";
   
    cout << "Podaj ile masz Euro :";
    cin >> EUR;
    PLN2 = EUR/4,27803025;
    cout << "Masz :" << PLN2 << "PLN";


    return 0;
}
