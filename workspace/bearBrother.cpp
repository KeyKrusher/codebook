#include <bits/stdc++.h>
using namespace std;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define LL long long
#define rep1(i,a,b) for (int i = a;i <= b;i++)
#define rep2(i,a,b) for (int i = a;i >= b;i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define rei(x) scanf("%d",&x)
#define rel(x) scanf("%lld",&x)
#define ref(x) scanf("%lf",&x)

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;

const int dx[9] = { 0,1,-1,0,0,-1,-1,1,1 };
const int dy[9] = { 0,0,0,-1,1,-1,1,-1,1 };
const double pi = acos(-1.0);
const int N = 110;

LL a, b;
LL ans = 0;

void in()
{
    cin >> a >> b;
}

void ga()
{
    while (a <= b)
    {
        a *= 3, b *= 2;
        ans++;
    }
}

void o()
{
    cout << ans << endl;
}

int main()
{
    //freopen("F:\\rush.txt", "r", stdin);
    in();
    ga();
    o();
    //printf("\n%.2lf sec \n", (double)clock() / CLOCKS_PER_SEC);
    return 0;
}