#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

void uttor() {
    int n, t, a, can_total, rem, dif;
    cin >> n >> t >> a;

    can_total = t + a;
    rem = n - can_total;
    dif = abs(t - a);

    cout << ((dif > rem) ? "Yes\n" : "No\n");
}

int main()
{
    doura;
    
    uttor();

    return 0;
}

// https://atcoder.jp/contests/abc366/tasks/abc366_a 
