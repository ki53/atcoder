#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long x[n]; for (int i=0; i<n; ++i) cin >> x[i];
    long man = 0;
    long euc = 0;
    int che = 0;
    for (int i=0; i<n; i++) {
        man += abs(x[i]);
        euc += abs(x[i]) * abs(x[i]);
        che = max(che, (int)abs(x[i]));
    }
    double euc_d = sqrt(euc);
    cout << fixed << setprecision(20);
    cout << man << endl;
    cout << euc_d << endl;
    cout << che << endl;
    return 0;
}