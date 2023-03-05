
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
     forward_list<int> forwardlist1={3,2,9};
 forward_list<int> forwardlist2={8,1,2};
   
   cout<<"forward_list first: "<<endl; 
    
    for (auto x: forwardlist1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
     cout<<"forward_list 2nd: "<<endl; 
    
    for (auto x: forwardlist2)
    {
        cout<<x<<" ";
    }
    cout<<"\nAfter swap  :";
    cout<<"\n forwardlist1 firstlist: ";
    forwardlist1.swap(forwardlist2);
     for (auto x: forwardlist1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<"forward_list 2nd: "; 
    
    for (auto x: forwardlist2)
    {
        cout<<x<<" ";
    }
    


    return 0;
}
