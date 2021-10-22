
//day2 question 2: by VISHWAYUSH CHOUHAN:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i] + a[j] == k){
                
                cout<<i<<" and "<<j<<endl;
                break;
            }
        }
    }
    return 0;
}