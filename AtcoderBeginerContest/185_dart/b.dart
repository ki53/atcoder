import 'dart:async';
import 'dart:convert';
import 'dart:io';
import 'dart:math';

Future main() async {
  List<int> arr = stdin.readLineSync().split(" ").map(int.parse).toList();
  int n = arr[0];
  int m = arr[1];
  int t = arr[2];

  var lines = stdin.transform(utf8.decoder).transform(LineSplitter()); 
  int last_time = 0;
  int battery = n;
  bool possible = true;
  await for(var line in lines) {
    List<int> ab = line.split(" ").map(int.parse).toList();
    battery -= ab[0] - last_time;
    if (battery <= 0) possible = false;
    // print("$ab[0] $battery"); 
    battery += ab[1] - ab[0];
    battery = min(n, battery);
    // print("$ab[1] $battery"); 
    last_time = ab[1];
  }
  battery -= t - last_time;
  if (battery <= 0) possible = false;
  if (possible) print("Yes");
  else print("No");
}