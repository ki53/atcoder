#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long x;
  cin >> n >> x;
  string s;
  cin >> s;
  for (int i=0; i<n; i++){
    if (s[i] == 'x') x--;
    else x++;
    
    if (x < 0) x++;
  }

  cout << x;
}
