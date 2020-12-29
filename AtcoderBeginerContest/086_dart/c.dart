import 'dart:convert';
import 'dart:io';
import 'dart:async';


// Future main() async {}
Future main() async {
  int n = int.parse(stdin.readLineSync());
  // List<List<int>> t_arr = new List<List<int>>();
  // for (int i=0; i<n; i++) t_arr.add(stdin.readLineSync().split(' ').map(int.parse).toList());

  var lines = stdin.transform(utf8.decoder).transform(LineSplitter()); 

  int now_t = 0;
  int now_x = 0;
  int now_y = 0;
  int count = 0;
  bool cannot = false;
  await for (var line in lines) {
    List<int> t = line.split(" ").map(int.parse).toList();
    int past_time = t[0] - now_t; // 経過時間
    int dist = (t[1] - now_x).abs() + (t[2] - now_y).abs(); // `距離の合計

    // cannot
    if (!(dist - past_time <= 0 && (dist - past_time) % 2 == 0)) {
      cannot = true;
      break;
    }

    now_t = t[0];
    now_x = t[1];
    now_y = t[2];
    count++;
    if (count >= n) break;
  }
  if (cannot) {
    print('No');
  } else {
    print('Yes');
  }
}