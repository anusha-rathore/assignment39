
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
     forward_list<int> forwardlist1={3,2,9};
 forward_list<int> forwardlist2;
  forwardlist2.assign(forwardlist1.begin() , forwardlist1.end());
   
   cout<<"forward_list first: "; 
    
    for (auto x: forwardlist1)
    {
        cout<<x<<" ";
    }
   
    cout<<"\nAfter copy   :";
    
    cout<<"\nforward_list 2nd: "; 
    
    for (auto x: forwardlist2)
    {
        cout<<x<<" ";
    }
    


    return 0;
}
