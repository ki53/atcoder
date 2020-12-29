import 'dart:io';
void main(List<String> argument) {
  List input = stdin.readLineSync().split(' ');
  if (int.parse(input[0]) % 2 == 0 || int.parse(input[1]) % 2 == 0) print('Even');
  else print('Odd');
}