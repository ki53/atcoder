import 'dart:io';

void main(){
  int n = int.parse(stdin.readLineSync());
  int counter = 0;
  for (int a=1; a<n; a++) {
    for (int b=1; b<n/a; b++) {
      if (a * b < n - 1) counter++;
      else break;
    }
  }
  print(counter);
}