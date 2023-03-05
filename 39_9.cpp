
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
     forward_list<int> forwardlist1={3,2,9,4};
 forward_list<int> forwardlist2= { 10 , 20, 30 ,40};
  forwardlist2.splice_after(forwardlist2.begin() ,  forwardlist1 , forwardlist1.before_begin(), forwardlist1.end());
   
   
    cout<<"\nforward_list 2nd: "; 
    
    for (auto x: forwardlist2)
    {
        cout<<x<<" ";
    }
    


    return 0;
}
