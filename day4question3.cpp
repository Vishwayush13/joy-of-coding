#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotatestring(char a[],int n){
    int temp=a[0];
    for(int i=0 ;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int main()
{   int n;
    cin>>n;
    int flag=0;

    char a1[n],a2[n];
    cout<<"ente the first string "<<endl;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cout<<"enter the second string"<<endl;
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    rotatestring(a1,n);
    for(int i=0;i<n;i++){
        if(a1[i]!=a2[i]){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        cout<<"not rotated string"<<endl;
    }
    else{
        cout<<"rotated string"<<endl;
    }

    return 0;
}