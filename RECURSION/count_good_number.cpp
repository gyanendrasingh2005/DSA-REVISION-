#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using ll = long long;
    static const int m = 1000000007;

    ll solve(ll a, ll b)
    {
        ll ans = 1;
        a %= m;
        while (b > 0)
        {
            if (b & 1)
                ans = (ans * a) % m;
            a = (a * a) % m;
            b >>= 1;
        }
        return ans;
    }

    int countGoodNumbers(ll n)
    {
        ll ev, od;
        if (n & 1)
        {
            ev = n / 2 + 1;
            od = n / 2;
        }
        else
        {
            ev = od = n / 2;
        }
        return (solve(5, ev) * solve(4, od)) % m;
    }
};

int main()
{
    long long n;
    cin >> n;
    Solution obj;
    cout << obj.countGoodNumbers(n);
    return 0;
}
