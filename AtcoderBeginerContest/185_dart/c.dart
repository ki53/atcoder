import 'dart:io';

void main(List<String> args) {
  int l = int.parse(stdin.readLineSync());
  // (l-1) C 11;

  int ans = l - 1;
  for (int i=2; i<12; i++) {
    ans = ans * (l-i) ~/ i;
  }

  print(ans);
}