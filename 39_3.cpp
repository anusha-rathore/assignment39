
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l1= {1,2,3,4,5,6,7,8,9,10} ;
   cout<<"forward_list first: "<<endl; 
    
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
  
  int sum=0;
  
 for (auto x: l1)
    {
        sum=sum+x;
    }
    cout<<"\n sum: "<<sum;

    return 0;
}
