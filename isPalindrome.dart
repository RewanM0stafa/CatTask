import 'dart:io';

void isPalindrome01(){
    
  int x = int.parse(stdin.readLineSync()!); 
  bool isP = true;

  String X = x.abs().toString(); 
  int n = X.length;

  for (int i = 0; i < n ~/ 2; i++) {
    if (X[i] != X[n - 1 - i]) {
      isP = false;
      break;
    }
  }

  if (isP || n==1) 
    print("isPalindrome");
  else 
    print("isNotPalindrome");
     
}



void isPalindrome02(){
    
  int x = int.parse(stdin.readLineSync()!); 
  bool isP = true;

  String X = x.toString(); 
  int n = X.length;

  for (int i = 0; i < n ~/ 2; i++) {
    
    if (X[0] == '-') {
      i++;
      continue;
    }

    if (X[i] != X[n - 1 - i]) {
      isP = false;
      break;
    }
  }

  if (isP || n==1) {
    print("isPalindrome");
  } else {
    print("isNotPalindrome");
  }
}




void main() {

 isPalindrome01();
 isPalindrome02();

}
