import 'dart:io';

void main(List<String> arg) {
  int a = readInt();
  int b = readInt();
  int c = readInt();
  int x = readInt();
  int sum;
  int count = 0;
  for (int i=0; i<=a; i++) {
    for (int j=0; j<=b; j++) {
      for (int k=0; k<=c; k++) {
        sum = 500 * i + 100 * j + 50 * k;
        if (x == sum) count++;
      }
    }
  }
  print(count);
}

int readInt(){
  return int.parse(stdin.readLineSync());
}