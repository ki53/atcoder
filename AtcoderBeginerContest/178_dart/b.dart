import 'dart:io';
import 'dart:math';

void main(){
  List<int> a = stdin.readLineSync().split(" ").map(int.parse).toList();
  int int_max = max(a[0], a[1]) * max(a[2], a[3]);
  int int_min = min(a[0], a[1]) * min(a[2], a[3]);
  int int_a = max(a[0], a[1]) * min(a[2], a[3]);
  int int_b = min(a[0], a[1]) * max(a[2], a[3]);

  int ans = max(max(int_max, int_min), max(int_a, int_b));
  print(ans);
}