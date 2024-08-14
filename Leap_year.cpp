#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define doura ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define sesh '\n';

void uttor() {
    int y;
    cin >> y;

    if (y % 400 == 0) {
        cout << 366 << sesh;
    }
    else if (y % 100 == 0) {
        cout << 365 << sesh;
    }
    else if (y % 4 == 0) {
        cout << 366 << sesh;
    }
    else {
        cout << 365 << sesh;
    }
}

int main()
{
    doura;
    
    uttor();

    return 0;
}
