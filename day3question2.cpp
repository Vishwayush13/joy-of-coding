#include<iostream>
//program by Vishwayush 
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j;
    int curr=0;
    for( i=0;i<n;i++){
        curr=0;
        for( j=i;j<n;j++){
            curr+=a[j];
            if(curr == k){
                cout<<"indexes are :"<< i<<"and"<<j<<endl;
                cout<<"subarray is  :"<<endl;
                cout<<"[";
                for(int k=i;k<=j;k++){
                    cout<<a[k]<<" ";
                }
                cout<<"]";
                break;
            }
        }
    }
    
    return 0;
}
