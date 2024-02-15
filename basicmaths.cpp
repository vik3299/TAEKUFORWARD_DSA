#include<bits/stdc++.h>
using namespace std;



void countdigi(int n){


    int lastdigi = 0  ;
    while( n > 0 ){
  
       //int lastdigi =  n % 10 ;

    int temp = n % 10 ; 
    cout << temp << endl;
    lastdigi = lastdigi + 1;

    
      n = n / 10 ;


    }
    cout << lastdigi << "\n  " ; 
  

  // Time complexity will be lo10 (N)

}

void reversenumb(){
 
  

 int n ;
 cin >> n ; //122345
 int revnumb = 0;
 int ld = 0 ;
  while( n > 0 ){
     ld = n % 10 ;
     revnumb = revnumb*10+ld;
     n = n / 10 ;

  
  }

  cout << revnumb;




}

void palindrome() {
   
    int n ;
    int dup = n ;
 cin >> n ; //122345
 int revnumb = 0;
 int ld = 0 ;
  while( n > 0 ){
     ld = n % 10 ;
     revnumb = revnumb*10+ld;
     n = n / 10 ;

  
  }

  if (dup == revnumb) {
    
    cout << "f";
  }else {
    cout << "fx";
  
  }
}

 void countdigitt(int n ) {
    
    int vall = n ;
    int rem = 0 ;
    int count = 0 ;
    
    
    while( vall > 0) {
      
      rem = vall % 10 ; 

      cout << rem << " ";

      vall = vall / 10 ;

      count = count + 1;
    
     
    
    }
   
   cout << "Lneghth" << count ;

 }

void palindromee(int n ) {
  
  int newvalue = n ;
  int lastdit = 0 ;
  int total_len = 0 ;
  int pal = 0 ;


  while ( newvalue > 0)
  {
    lastdit = newvalue % 10 ; 

    pal = pal*10 + lastdit;
    
    newvalue = newvalue / 10 ;
    


  }

  if(pal == n) cout << "true" ;
  else cout << "false";  




}

void armstrong(int n) {
  
  int copy = n ;
int armstrongnumb = 0 ;
 
  int size = 0 ;
  int lastdigi = 0 ;
  
  while(copy > 0){
      copy = copy / 10;
      size = size + 1 ;
  }

  cout << n << "\n" << armstrongnumb << "\n";


  int armcopy = n ;
    cout << armcopy << "\n" << armstrongnumb << "\n";
  while ( n > 0 ) 
  {
     
     lastdigi = n % 10 ;
     armstrongnumb = pow(lastdigi,size) + lastdigi ;
    n = n / 10 ;
   

  }

  cout << armcopy << "\n" << armstrongnumb << "\n";
  if (armstrongnumb == armcopy ) {
    cout << "armsrtong" << armstrongnumb  ;
  }else {
     cout << "not armsrtong" << armstrongnumb ;
  }
  
  
}

void printalldivisors(int n){
   vector<int> ls ;
  for(int i = 1; i<=n; i++){
    
    if(n % i == 0){
           cout << i << " ";
    }
   
   
     
  }


}

void checkforprime(int n){
   int count = 0 ;
   for(int i=0 ; i<=n ; i++){
      if(n %i  == 0) {

      count++;    
   
      }

       if(count==0) {
    cout << "bitch ur a prime";
   }else{
    cout << " bitch fcuk u ";
   }
         
   }

  
   
}


int gcd(int n ){
  int a , b = 0 ;
  cin >> a ; 
  cin >> b ;
  
  int gcd ; 

  for(int i = 1 ; i <= min(a,b); i++){
     
      if(a % i == 0 && b % i ==0){
             gcd = i ;
      }
      

  }

  cout << "Gcd si :" << gcd ;


}

void euldian(int n ){
 int a , b = 0 ;
  cin >> a ; 
  cin >> b ;
  
  while(a > 0 && b > 0 ){
    if(a>b) a = a % b ;
    else b = b % a;
  }

  if(a==0) {
    cout << b ;
  } 
  else {
    cout << a ;
  }

}
int main(){


int n ;
cin >> n ;

gcd(n);



} 