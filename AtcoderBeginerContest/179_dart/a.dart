import 'dart:io';

void main(){
  String s = stdin.readLineSync();
  int n = s.length;
  String ans = s;
  if (s[n-1] == "s") ans += "es";
  else ans += "s";
  print(ans);
}