
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l1= {1,2,2,3,4,4,5,6,7,8,9,10} ;
   cout<<"forward_list first: "<<endl; 
    
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<" remove all consecutive duplicate elements from forward_list first: "<<endl; 
    l1.unique();
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  


    return 0;
}
