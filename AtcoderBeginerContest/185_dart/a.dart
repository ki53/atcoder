import 'dart:io';
import 'dart:math';

void main(List<String> arg) {
  List<int> a = stdin.readLineSync().split(" ").map(int.parse).toList();
  int min_v = a[0];
  for (int i=1; i<a.length; i++) {
    min_v = min(min_v, a[i]);
  }
  print(min_v);
}