import 'dart:io';

void main(List<String> arg) {
  List line = stdin.readLineSync().split(' ');
  int n = int.parse(line[0]);
  int a = int.parse(line[1]);
  int b = int.parse(line[2]);
  int ret = 0;
  int tmp = 0;
  for (int i=1; i<=n; i++) {
    tmp = i;
    int cnt = 0;
    for (int j=0; j<5; j++) {
      // print('i: $i, tmp: $tmp');
      cnt += tmp % 10;
      tmp ~/= 10;
    }
    // print(cnt);
    if (a <= cnt && cnt <= b) ret += i;
  }
  print(ret);
}