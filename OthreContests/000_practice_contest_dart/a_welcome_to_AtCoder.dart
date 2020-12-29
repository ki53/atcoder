/**
 * Constrains
 * 1 <= a, b, c <= 1000
 * 1 <= s <= 100
 * 
 * Input
 * a 
 * b c
 * s
 * 
 * Output
 * Output the result of a+b+c and string s with a half-width break in one line. 
 * 
 */

import 'dart:io';

void main(List<String> arguments){
  int ans = int.parse(stdin.readLineSync());
  List n = stdin.readLineSync().split(' ');
  ans += int.parse(n[0]);
  ans += int.parse(n[1]);
  // ans += n[0] + n[1];
  String str = stdin.readLineSync();
  print('$ans $str');
}