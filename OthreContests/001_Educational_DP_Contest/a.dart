import 'dart:io';
import 'dart:math';

int main(){
  const INF = 10000000010;
  int n = int.parse(stdin.readLineSync());
  List<int> h = stdin.readLineSync().split(" ").map(int.parse).toList();
  List<int> dp = new List(n);
  for (int i=0; i<n; i++) {
    dp[i] = INF;
  }
  dp[0] = 0;
  for (int i=1; i<n; i++) {
    dp[i] = min(dp[i], dp[i-1] + (h[i-1] - h[i]).abs());
    if (i>1) {dp[i] = min(dp[i], dp[i-2] + (h[i-2] - h[i]).abs()); }
  }
  print(dp[n-1]);
  return 0;
}