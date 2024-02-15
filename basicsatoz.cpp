#include<bits/stdc++.h>
using namespace std ;



void pairss(){
    // its an part of utlity library 
    pair<int,string> pv ={1,"helooo Kriiti 3000 >>>"};

    cout << pv.first << " " << pv.second  << "\n";

    
     // we can also store nested pair in each pair
    pair<int ,pair<int,int>> p = {1,{3,4}};

    cout << p.first << " " << p.second.second << " " << p.second.first  << "\n";
     // how we can use array to store data in pairs 

     pair<int,int> arr[] = {{1,2},{1,4}};

     cout << arr[1].second ;

    
}

void exvector(){

// as we know array are fixed in size thats why we cannot mainpulate with 
// its size so it is constrainfull now we can use vector which we can dynaimally modify 
    vector<int> v;
     /// how to add data in  a veactor 
     v.push_back(5);
     v.push_back(24);
     v.push_back(44);
     v.push_back(56);
     v.emplace_back(21);

    // how to add pair in vector
     vector<pair<int,int>>vec;
   
     vec.push_back({1,2});
     vec.emplace_back(1,2);
   
     //how to allocate size and the data of it 
     // example in below the size is 5 and there will 5 copy of 100 in it 
     vector<int> vc(5,100);

      // how to copy one vector to another 

      vector<int> v2(v);

      // Itertors 
      // so how we can acces the vector 
      // we can use v[0] index like array to acces it 
      // or we can use itterort


     vector<int>::iterator it = v.end();
     
      



    /* for (auto it = v2.begin(); it !=v2.end(); it++){
        cout << *(it) << " " ;
     } */

     for (auto it : v) {
        cout << it << " " ;
     }



}

int main(){
    
    exvector();

    return 0;

}