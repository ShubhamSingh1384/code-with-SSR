#include <iostream>
using namespace std;
int main()
{
    int num[5] = {2, 7, 6, 3}, target = 9;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            int y = num[i] + num[j];
            if (y == 9)
            {
                cout << i << "," << j << " ";
            }
        }
    }
}