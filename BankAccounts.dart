
class BankAccounts{
  String? accountNumber;
  double balance=0;
  
  BankAccounts(String a , double b){
    accountNumber=a;
    balance=b;
  }
  
  void get_balance(){
    print("Your current balance is \$${balance}"); 
  }
  
  void deposite(double amount){ // الإيداع
    balance+=amount;
    print("Your current balance is \$${balance}"); 
    
  }
  
  void withdraw(double amount){ // السحب
   if(balance>=amount)
    balance-=amount;
   else
     print("Sorry!You don't have enough money.");
   print("Your current balance is \$${balance}"); 
  }
  
}


void main() {
  
  BankAccounts account1=new BankAccounts("1234",1000);
  account1.deposite(500);
  //account1.get_balance();
  
}
