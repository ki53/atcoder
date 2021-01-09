import 'dart:io';
import 'dart:math';

void main(){
  int n = int.parse(stdin.readLineSync());
  Set<int> ans = new Set();
  for (int i=1; i<sqrt(n); i++) {
    if (n % i == 0) {
      ans.add(i);
      ans.add(n~/i);
    }
  } 
  List<int> a = ans.toList();
  a.sort();
  for (int i=0; i<ans.length; i++) {
    print(a[i]);
  } 
}
