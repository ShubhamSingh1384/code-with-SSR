#include <iostream>
using namespace std;
void PROBLEM_SOLVER()
{

    int sc1 = 0, sc2 = 0, diff = 0, ans = 1;
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        sc1 += x, sc2 += y;
        if (diff < max(sc1 - sc2, diff))
        {
            ans = 1, diff = sc1 - sc2;
        }
        else if (diff < max(sc2 - sc1, diff))
        {
            ans = 2, diff = sc2 - sc1;
        }
    }
    cout << ans << " " << diff << endl;
    return;
}
int main()
{

    // FAST_IO
    // int t;cin>>t;while(t--)
    PROBLEM_SOLVER();
    return 0;
}