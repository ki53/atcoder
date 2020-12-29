import 'dart:io';

// List<String> to List<int>: https://stackoverflow.com/questions/55274436/convert-list-of-string-to-list-of-int-dart

void main(List<String> arg){
  int n = int.parse(stdin.readLineSync());
  List<int> a = stdin.readLineSync().split(' ').map(int.parse).toList();
  a.sort();
  int ans = 0;
  bool alice = true;
  for (int i=a.length-1; i>=0; i--) {
    if (alice) {
      ans += a[i];
      alice = false;
    } else {
      ans -= a[i];
      alice = true;
    }
  }
  print(ans);
}