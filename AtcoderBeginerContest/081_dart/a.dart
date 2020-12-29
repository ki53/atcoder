import 'dart:io';

void main(List<String> argument) {
  String str = stdin.readLineSync();
  int count = 0;
  for (int i=0;i<str.length; i++){
    if (str[i] == '1') count++;
  }
  print(count);
}