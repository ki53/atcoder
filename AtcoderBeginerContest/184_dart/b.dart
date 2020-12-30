import 'dart:io';

void main(List<String> arg) {
  List<int> nx = stdin.readLineSync().split(" ").map(int.parse).toList();
  String s = stdin.readLineSync();
  int ans = nx[1];
  for (int i=0; i<s.length; i++) {
    if (s[i] == 'o') ans++;
    else ans--;

    if (ans < 0) ans++;
  }
  print(ans);
}