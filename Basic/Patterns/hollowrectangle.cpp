#include<iostream>
using namespace std;

int main() {
 
 int rol,col;
 cin >> rol >> col ;

 for (int i = 1; i <= rol; i++)
 {
    for (int j = 1; j<= col; j++)
    {
        if(i==1 || i==rol ||j==1 || j==col ){
               cout << "*";
        }else {
            cout << " ";
        }
       
    }
     cout << endl;
 }
 
return 0;

}