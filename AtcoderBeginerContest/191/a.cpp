#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,t,s,d;
    cin >> v >> t >> s>> d;
    int start = v * t;
    int end = v * s; 
    if (d < start || end < d) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
