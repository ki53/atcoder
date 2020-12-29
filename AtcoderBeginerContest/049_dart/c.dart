import 'dart:io';

int main(List<String> arg) {
  String s = stdin.readLineSync();
  String dream = 'maerd';
  String dreamer = 'remaerd';
  String erase = 'esare';
  String eraser = 'resare';
  for(int i=s.length-1; i>=4;) {
    if (s[i] == 'm') {
      String tmp = s[i] + s[i-1] + s[i-2] + s[i-3] + s[i-4];
      if (tmp == dream) {
        // print(tmp);
        i -= 5;
      } else {
        print('NO');
        return 0;
      }

    } else if (s[i] == 'e') {
      String tmp = s[i] + s[i-1] + s[i-2] + s[i-3] + s[i-4];
      if (tmp == erase) {
        // print(tmp);
        i -= 5;
      } else {
        print('NO');
        return 0;
      }

    } else {
      if (i < 5) {
        print('NO');
        return 0;
      }
      String tmp = s[i] + s[i-1] + s[i-2] + s[i-3] + s[i-4] + s[i-5];
      if (tmp == eraser) {
        // print(tmp);
        i -= 6;

      } else {
        if (i < 6) {
          print('NO');
          return 0;
        }
        tmp = s[i] + s[i-1] + s[i-2] + s[i-3] + s[i-4] + s[i-5] + s[i-6];
        if (tmp == dreamer) {
          // print(tmp);
          i -= 7;

        } else {
          print('NO');
          return 0;
        }
      }
    }
  }
  print('YES');
  return 0;

}