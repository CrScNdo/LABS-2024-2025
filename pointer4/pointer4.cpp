#include <iostream>
using namespace std;
int main()
{
    int N;
    int t = 0;
    int *ptr1;
    int *ptr2;
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        if (t < i)
        {
            ptr1 = &t;
        }
        if (i > t)
        {
            ptr2 = &i;
        }
    }
    cout << "Max "<< *ptr2 << endl << "Min " << *ptr1 << endl;
    return 0;
}
