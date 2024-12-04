#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n;
    float sum = 0;
    int fact = 1;
    cin >> x >> n;
    for (int i = 1; i <= n+1; i++)
    {
        fact *= i;
        sum += (pow(x, i))/fact;
    }
    cout << sum << endl;
    return 0;
}
