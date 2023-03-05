
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l1= {13,5,7,89,4,1,2} ;
   
    forward_list<int> l3;
    l3.assign(5,10);
    forward_list<int>l4;
    l4.assign(l1.begin() , l1.end());
    
     forward_list<int> l2;
     l2.assign({9,8,7,6,8,2,3,5,1});
    cout<<"Forword_list 1 :";
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  
    cout<<"\n Forword_list 2 :";
    for (auto x: l2)
    {
        cout<<x<<" ";
    }
  cout<<"\n Forword_list 3 :";
    for (auto x: l3)
    {
        cout<<x<<" ";
    }
  cout<<"\n Forword_list 4 :";
    for (auto x: l4)
    {
        cout<<x<<" ";
    }
 


    return 0;
}
