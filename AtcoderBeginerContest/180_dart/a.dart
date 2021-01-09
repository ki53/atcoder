import 'dart:io';

void main(){
  List<int> nab = stdin.readLineSync().split(" ").map(int.parse).toList();
  int ans = nab[0] - nab[1] + nab[2];
  print(ans);
}