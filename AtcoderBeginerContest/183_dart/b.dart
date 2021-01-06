import 'dart:io';

void main(){
  List<int> sg = stdin.readLineSync().split(" ").map(int.parse).toList();
  double x_ = (sg[2] - sg[0]).toDouble();
  double y_ = (0 - sg[3] - sg[1]).toDouble();
  double a =  y_ / x_;
  // print(a);
  double b = sg[1] - (sg[0] * a);
  // print(b);
  double ans = b / (0 - a);
  print(ans);
}