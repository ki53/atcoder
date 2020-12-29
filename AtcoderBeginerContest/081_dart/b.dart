import 'dart:io';

void main(List<String> arguments) {
  int n = int.parse(stdin.readLineSync());
  int max_n = 999999999;
  int how_many_devide_by_two;
  List readLine = stdin.readLineSync().split(' ');
  for (int i=0; i<n; i++) {
    int target = int.parse(readLine[i]);
    how_many_devide_by_two = multi(target);
    if (max_n > how_many_devide_by_two) max_n = how_many_devide_by_two;
  }
  print(max_n);
}

int multi(int num){
  int count = 0;
  int tmp = num;
  while (true) {
    if (tmp % 2 == 0) {
      count++;
      tmp = tmp ~/ 2;
    } else {
      return count;
    }
  }
}