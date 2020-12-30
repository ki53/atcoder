import 'dart:io';
void main(List<String> arguments){
  List<int> ab = stdin.readLineSync().split(' ').map(int.parse).toList();
  List<int> cd = stdin.readLineSync().split(' ').map(int.parse).toList();
  int ans = ab[0] * cd[1] - ab[1] * cd[0];
  print(ans);
} 