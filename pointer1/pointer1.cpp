#include <iostream>
using namespace std;
int main()
{
    int n,c, tmp;
    int *ptr1;
    int *ptr2;
    n = 0;
    c = 3;
    cout << n <<  c << endl;
    ptr1 = &n;
    tmp = *ptr1;
    ptr2 = &c;
    ptr1 = ptr2;
    ptr2 = &tmp;
    n = *ptr1;
    c = *ptr2;
    cout << n <<  c << endl;
    return 0;
}