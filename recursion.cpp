#include<bits/stdc++.h>
using namespace std ;

void printname(int i,int n) {
    string name = "vivek";
 
    if(i > n){
     return;
    }
       cout << name << endl ;
    printname(i+1,n);

}
void printoneton(int i,int n) {
    string name = "vivek";
 
    if(i > n){
     return;
    }
       cout << i << endl ;
    printoneton(i+1,n);

}

void printntone(int i,int n) {
    

if(i < 1) {
   
   return;
      
}

cout << i << " ";

printntone(i,n);
 
   
}

void printntoonebacktrack(int i, int n){
   if(n < i){
      return;
   }

   printntoonebacktrack(i+1,n);
   cout << i << " ";
}

void sumofnnumber(int i ,int n) {
   if(i < 1) {
     cout << n << " " ;
      return;
   } 


   
   sumofnnumber(i -1 ,n+i);
    
 
}
int main(){
 
 int n ;

 cin >> n ;

 sumofnnumber(n,0);
 


}