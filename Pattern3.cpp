#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    while (i >= 1)
    {
        int k = 1;
        while (k <= 5 - i)
        {
            cout << " ";
            k++;
        }

        int j = i;
        while (j >= 1)
        {
            cout << j;
            j--;
        }

        cout << "\n";
        i--;
    }
}
