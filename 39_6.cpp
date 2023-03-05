
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
     forward_list<int> l1= {1,5,7,8,4,2} ;
    forward_list<int> l2;
    l2.assign({9,7,6,5});
   cout<<"forward_list first: "<<endl; 
    
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"forward_list 2nd: "<<endl; 
    
    for (auto x: l2)
    {
        cout<<x<<" ";
    }
    cout<<" \n After merge  forward_list first: "<<endl; 
    l1.merge(l2);
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  


    return 0;
}
