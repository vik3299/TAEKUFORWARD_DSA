#include<iostream>
using namespace std;


void pattern1(int n){
    //printing Reactangle 
    
    for(int i=0; i<=n;i++){
        for (int j = 0; j <n; j++)
        {
            cout << "*";

        }

        cout << endl;
        

    }
    


}
void pattern2(int n){
 /*Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *

*/

for(int i=0;i<=n;i++){ //Outer Loop 

   for(int j=0;j<i;j++) {

    cout << "*";


   }
   cout << endl;


}

}
void pattern3(int n){
 /*Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
1 2 
1 2 3*/
for(int i=0;i<=n;i++){

    for(int j=0;j<i;j++){
        cout << i << " ";
    }
    cout << endl;
}

}
void pattern4(int n){
    /*Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers representing the row number.

For every value of ‘N’, help sam to print the corresponding Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3
*/
for(int i=1;i<=n;i++){

    for(int j=0;j<i;j++){
        cout << i << " ";
    }
    cout << endl;
}

}
void pattern5(int n){
    /*Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*
*/

for(int i=0; i<=n;i++){

    for(int j=0; j<n-i;j++){

        cout << "* ";
    }

    cout << endl;
}
}
void pattern6(int n){
    /*Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1
*/
for(int i=0; i<=n;i++){

    for(int j=1; j<n-i+1;j++){

        cout << j;
    }

    cout << endl;
}

}
void pattern7(int n){
     
     /*Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/
 for(int i=1; i<=n;i++){
    
    //space 
    for(int j=0; j<n-i;j++){
        cout << " ";
    }
   //star
    for(int j=0; j<2*i-1;j++){
        cout << "*";
    }
    //space 
    for(int j=0; j<n-i;j++){
        cout << " ";
    }
   
    cout << endl;

 }

}
void pattern8(int n){
   /* Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
*/

for(int i=0;i<=n;i++){
    //space
    for(int j=0;j<i;j++){
        cout << " ";
    }

    //star 
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<< "*";
    }
    //space
     for(int j=0;j<i;j++){
        cout << " ";
    }

  
    cout << endl;
}
}
void pattern9(int n){
    /*Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *
  * */
    pattern7(n);
    pattern8(n);
}
void pattern10(int n){
    /*
    Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

Example:
Input: ‘N’ = 3

Output: 

*
**
***
**
*
*/

for(int i=0;i<=2*n-1;i++){
     int stars = i;

     if(i>n) stars = 2*n -i;

     for (int j = 0; j < stars; j++)
     {
        cout << "*";
     }

     cout << endl;
     

}


}
void pattern11(int n){
    /*Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

You are required to print the pattern as shown in the examples below.

Example:
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1
*/
for(int i=0;i<=n;i++){
    
    int start = 1;
    if(i % 2 == 0) start=0;

    for (int j = 0; j < i; j++)
    {
        
        cout << start;
        start = 1 - start ;
    }
    cout << endl;
    
}
}
void pattern12(int n){
    /*Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

Given 'N', print the corresponding pattern.

Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1

*/
for(int i=0;i<=n;i++){
   
   for(int j=1; j<+i;j++){
    cout << j;
   }

   for(int j=1; j<=2*n-(2*i);j++){
    cout << " ";
   }
    for(int j=i; j>=1;j--){
    cout << j;
   }

   cout << endl;

}
}
void pattern13(int n){
    /*Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6*/ 
int num = 1 ;
for(int i=0;i<=n;i++){
    for(int j=1; j<=i; j++){
        cout << num;

        num = num + 1;
    }
    cout << endl;
}
}
void pattern14(int n){
  /*Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C*/

for(int i=0; i<=n;i++){
    
    for (char ch = 'A'; ch <= 'A'+ i;ch++){
        cout << ch << " ";
    }

    cout << endl;

}

}
void pattern15(int n){
   
   /*Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A
*/
int count = 0;
for(int i=0; i<=n;i++){
    
    for (char ch = 'A'; ch <= 'A'+ (n - i - 1);ch++){
        cout << ch << " ";

      
    }

    cout << endl;

}





}
void pattern16(int n){
    /*Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.

Example:
Input: ‘N’ = 3

Output: 
A
B B
C C C*/
for(int i=0; i<=n;i++){
    char ch = 'A' + i;
    for (int j = 0; j <= i;j++){
        cout << ch << " ";

      
    }

    cout << endl;

}

}
void pattern17(int n){
    /*Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A

*/

for(int i=0; i<=n;i++){
    
    //space 
    for(int j=0; j<n-i;j++){
        cout << " ";
    }
   //star
   char ch = 'A';
   int breakpoint = (2*1+1)/2;
    for(int j=1; j<=2*i+1;j++){
        cout << ch ;
        if(j<=breakpoint) ch++;
        else ch--;
    }
    //space 
    for(int j=0; j<n-i;j++){
        cout << " ";
    }
   
    cout << endl;
}

}
void pattern18(int n){
    
    for(int i=0; i<=n;i++){
        for (char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch ;
        }

        cout << endl;
    }
}
void pattern19(int n){
    /*Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
*/
//upper half 
for(int i=0;i <n ; i++){
    for(int j=0; j< n - i ;j++){//star
        cout << "*";
    }
//space 
   for(int j=0; j< i*2 ;j++){
        cout << " ";
    }
     for(int j=0; j< n - i ;j++){//star
        cout << "*";
    }
    cout << endl;
}


int ispace = n ;
for(int i=1;i <=n ; i++){
    for(int j=1; j<=i  ;j++){//star
        cout << "*";
    }
//space 
   for(int j=0; j< ispace ;j++){
        cout << " ";
    }
     for(int j=1; j<=i ;j++){//star
        cout << "*";
    }

    ispace -= 2 ;
    cout << endl;
}

}
void pattern20(int n){
    int ispace = 2*n -2 ;
    for (int i =1; i<= 2*n-1; i++){
        //stars 

        int stars = i;
        if(i > n ) stars = 2*n - i;
        
        for(int j = 1; j<=stars ;j++){
            cout << "*";
        }     

        //spaces 
        for(int j = 1; j<=ispace ; j++){
            cout << " ";
        }

        //stars 
        for(int j = 1; j<=stars ;j++){
            cout << "*";
        }     
       cout << endl;
        if(i < n ) ispace -= 2 ;
        else  ispace += 2;


    }
}
void pattern21(int n){

     for(int i=0 ; i<n ; i++){
        for(int j=0; j<n; j++){

            if(j==0 || i == 0 || i ==n - 1 || j == n -1 ) {
                cout << "*";
            } 
            else { cout << " ";
            }

            
        }
        cout <<  endl ;
    }
}
void pattern22(int n){

    for(int i=0; i< 2*n -1 ; i++){

        for (int j = 0 ; j < 2*n-1 ; j++){
            int top = i;
            int left = j;
            int right = (2*n- 2) -j;
            int bottom = (2*n- 2) -i;

            cout << ( n - min(min(top,bottom), min(left,right)));

        }
        cout << endl;
    }
}
int main() {
int t ;
cin >> t ;

     for(int i=0;i<t;i++){
   int n ;
   cin >> n;
   pattern22(n);

   

}


    
}