{"filter":false,"title":"bearBrother.cpp","tooltip":"/bearBrother.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":53,"column":1},"action":"insert","lines":["#include <bits/stdc++.h>","using namespace std;","#define lson l,m,rt<<1","#define rson m+1,r,rt<<1|1","#define LL long long","#define rep1(i,a,b) for (int i = a;i <= b;i++)","#define rep2(i,a,b) for (int i = a;i >= b;i--)","#define mp make_pair","#define pb push_back","#define fi first","#define se second","#define rei(x) scanf(\"%d\",&x)","#define rel(x) scanf(\"%lld\",&x)","#define ref(x) scanf(\"%lf\",&x)","","typedef pair<int, int> pii;","typedef pair<LL, LL> pll;","","const int dx[9] = { 0,1,-1,0,0,-1,-1,1,1 };","const int dy[9] = { 0,0,0,-1,1,-1,1,-1,1 };","const double pi = acos(-1.0);","const int N = 110;","","LL a, b;","LL ans = 0;","","void in()","{","    cin >> a >> b;","}","","void ga()","{","    while (a <= b)","    {","        a *= 3, b *= 2;","        ans++;","    }","}","","void o()","{","    cout << ans << endl;","}","","int main()","{","    //freopen(\"F:\\\\rush.txt\", \"r\", stdin);","    in();","    ga();","    o();","    //printf(\"\\n%.2lf sec \\n\", (double)clock() / CLOCKS_PER_SEC);","    return 0;","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":87.5,"scrollleft":0,"selection":{"start":{"row":49,"column":9},"end":{"row":49,"column":9},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":15,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1490575126547,"hash":"fcaef7caa4f326f54a31db7854f3424d8a167663"}