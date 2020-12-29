import 'dart:io';

int main(List<String> arg){
  List<int> input = stdin.readLineSync().split(' ').map(int.parse).toList();
  int n = input[0];
  int y = input[1];
  for (int i=0; i<=n; i++){
    for (int j=0; j<=n-i; j++) {
      int k = n - i - j;
      int ans = 10000 * i + 5000 * j + 1000 * k;
      if (y == ans) {
        print('$i $j $k');
        return 0;
      }
    }
  }
  print('-1 -1 -1');
  return 0;
}