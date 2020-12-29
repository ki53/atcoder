import 'dart:io';

void main(List<String> arg) {
  int n = int.parse(stdin.readLineSync());
  List<int> d = new List<int>();
  for (int i=0; i<n ; i++) d.add(int.parse(stdin.readLineSync()));
  Set s = d.toSet();
  print(s.length);
}