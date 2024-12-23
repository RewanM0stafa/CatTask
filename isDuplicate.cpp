//Solution01
void list01() {
  List<int> num = [10, 20, 23, 45, 96, 10, 21, 22, 21];
  List<int> freqnum = [];
 
  //Remove Duplication 
  for (int i = 0; i < num.length; i++) {
    bool isdup = false; //to be reset each iteration
    for (int j = 0; j < freqnum.length; j++) {
      if (num[i] == freqnum[j]) {
        isdup = true;
        break;
      }
    }

    if (!isdup) freqnum.add(num[i]);
  }
  
  //Revere List
  for (int i = 0 ,end=freqnum.length-1 ;i<end; i++,end--) {
      int temp = freqnum[i];   //tempfirst=10
      freqnum[i] = freqnum[end];     //first=21(e)
      freqnum[end] = temp;      //end=10(f)
    }
  
  print(freqnum);
}

//Solution02
void list02() {
  List<int> num0 = [10, 20, 23, 45, 96, 10, 21, 22, 21];
  num0 = num0.reversed.toList();
  Set<int> num1 = Set.from(num0);
  List<int> num2 = List.from(num1);
  print(num2);
  // print(num1);
  //print(num0);
}

void main() {
  list01();
  list02();
}
