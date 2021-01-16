#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <math.h>
#include <iomanip>
#include <queue>
#include <map>
 
#define LL long long
#define ULL unsigned long long
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define REP(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define REPD(i, a, b) for (int i = (a); i >= (b); --i)
#define X first
#define Y second
#define pb(a) push_back(a);
#define pii pair<int, int>
#define pLi pair<LL, int>
#define piL pair<int, LL>
#define pLL pair<LL, LL>
#define ar array
 
using namespace std;
 
const int mxn = 2e3 + 5;
const ULL INF = 1e18 + 5;
const LL BASE = 311;
const LL MOD = 1e9 + 7;
ULL f[mxn];
LL a[mxn], b[mxn];
 
int main()
{
    //freopen("D:\\test.txt", "r", stdin);
    //freopen("D:\\test2.txt", "w", stdout);
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        REP(i, 1, n) scanf("%d", &a[i]);
        REP(i, 1, m) scanf("%d", &b[i]);
        memset(f, 0, sizeof(f));
        REP(i, 1, m) if (a[1] == b[i]) f[i] = 1;
        ULL g, res = 0;
        REP(i, 2, n)
        {
            g = 0;
            REP(j, 1, m)
            {
                ULL x = f[j];
                if (a[i] == b[j]) f[j] = g + 1;
                if (2*b[j] <= a[i]) g = max(g, x);
                res = max(res, f[j]);
            }
        }
        cout << res << endl;
    }
}
 
