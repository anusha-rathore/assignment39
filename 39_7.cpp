
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
    cout<<"After sort :";
    forwardlist1.sort();
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
    cout<<" \n After sort : "; 
    forwardlist2.sort();
    for (auto x: forwardlist2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  


    return 0;
}
