
//day2 question 1: by VISHWAYUSH CHOUHAN:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;// using set
    int n;
    int a[n];
    cout<<"enter the size of data :";
    cin>>n;
    cout<<"enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);//unique element will be stored in set
    }
    cout<<"elements without repetation are:"<<endl;
    for(auto i: s)
    cout<<i;
    

    return 0;
}