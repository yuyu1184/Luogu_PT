#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

inline int lowbit(int x)
{
    return x & (-x);
}

int n, m;
int tree[200010];

inline void add(int x, int k)
{
    while (x <= n)
    {
        tree[x] += k;
        x += lowbit(x);
    }
}

inline LL sum(int x)
{
    LL ans = 0;
    while (x)
    {
        ans += tree [x];
        x -= lowbit(x);
    }
    return ans;
}

signed main()
{
    cin >> n >> m;
    while (m --)
    {
        char s[2];
        scanf ("%s", sd);
        int y = read(), z = read();
        if (*s == 'x')
            add(y, z);
        else
            cout << sum(z) - sum(y - 1) << endl;
    }
    return 0;
}
