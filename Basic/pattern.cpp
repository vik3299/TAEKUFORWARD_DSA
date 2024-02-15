#include<iostream>
using namespace std;

int main() {
 
    int col,row = 0;
    cin >> col >> row ;

    

    for(int i=0;i<=row;i++) {
      for (int i = 0; i <= col; i++)
      {
              cout << "*";
      }
      
      cout << endl;

    }

}