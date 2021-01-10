import 'dart:convert';
import 'dart:io';

Future main() async {
  int n = int.parse(stdin.readLineSync());
  var lines = stdin.transform(utf8.decoder).transform(LineSplitter());

  int count = 0;
  int zorome_counter = 0;
  bool judge = false;
  await for (var line in lines) {
    List<int> d = line.split(" ").map(int.parse).toList();
    if (d[0] == d[1]) zorome_counter++;
    else zorome_counter = 0;

    if (zorome_counter == 3) judge = true;
    if (count >= n) break;
  }

  if (judge) print("Yes");
  else print("No");

}