import 'dart:io';
import 'dart:math';

void main(){
  int n = int.parse(stdin.readLineSync());
  List<int> x = stdin.readLineSync().split(" ").map(int.parse).toList();
  int manhattan = 0;
  int euclidean_int = 0;
  int chebyshev = 0;
  for (int i=0; i<n; i++) {
    manhattan += (x[i]).abs();
    euclidean_int += (x[i]) * (x[i]); 
    chebyshev = max((x[i]).abs(), chebyshev);
  }
  double euclidean = sqrt(euclidean_int);
  print(manhattan);
  print(euclidean);
  print(chebyshev);
  
}