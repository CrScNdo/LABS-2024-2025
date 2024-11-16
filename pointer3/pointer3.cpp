#include <iostream>
using namespace std;
int main()
{
    float n,c;
    float *ptr1;
    float *ptr2;
    n = 4.5;
    c = 3.67;
    ptr1 = &n;
    ptr2 = &c;
    cout << *ptr1 + *ptr2 << endl;
    return 0;
}

