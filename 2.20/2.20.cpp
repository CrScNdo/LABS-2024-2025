#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float n, found, tmp;
    cin >> n >> found;
    for (int i = 1; i <= n; i++)
    {
        tmp = sin(n + (i/n));
        if (found == tmp)
        {
            cout << "Такое число есть\n";
        }
	else
        {
            cout << "Такого числа нет\n";
        }
    }
    return 0;
}
