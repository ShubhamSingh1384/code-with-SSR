// complement of number --> 5(101) change into (010)means 2;
// Try to understand pls;
#include <iostream>
using namespace std;
int main()
{
    int n, mask = 0;
    cin >> n;
    int m = n;
    if (n == 0)      // edge case(think about it)
    {
        cout << 1;
    }
    else
    {
        while (n != 0)
        {
            mask = (mask << 1) | 1;
            n = n >> 1;
        }
        int ans = (~m) & mask;
        cout << ans;
    }
}