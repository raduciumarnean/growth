#include <iostream>
#include <math.h>
using namespace std;

void growth()
{
    float x = 1, y = 1, sol = 0;
    cout << "\n  Pretul initial este: ";
    cin >> x;
    cout << "  Pretul actual este: ";
    cin >> y;
    sol =  (y - x) / x * 100;
    cout << "\n  Cresterea este de " << sol << "%\n";
}

int main()
{
    cout << "  Calculator procent crestere\n\n";
    int i = 1;
    while(i == 1)
    {
        growth();
        cout << "\n ----------------------------------------------------- \n\n Doriti sa mai efectuati un calcul?\n 1.DA   2.NU\n Raspuns: ";
        cin >> i;
        cout << "\n ----------------------------------------------------- \n";
    }
    return 0;
}
