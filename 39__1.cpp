
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l1= {13,5,7,89,4,1,2} ;
    forward_list<int> l2;
    l2.assign({9,8,7,6,8,2,3,5,1});
    l1.sort();
    cout<<"Forword_list 1 :";
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    l2.sort();
    cout<<"\n Forword_list 2 :";
    for (auto x: l2)
    {
        cout<<x<<" ";
    }
    cout<<" \nAfter mergeForword_list 1: ";
    l1.merge(l2);
    for (auto x: l1)
    {
        cout<<x<<" ";
    }
    


    return 0;
}
