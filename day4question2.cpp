//day4 question2:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    getline(cin,s);
    vector<int> v(25,0);
    for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
    }
    int maxfreq=0;
    char ans ='a';
    for(int i=0;i<v.size();i++){
        if(v[i]>maxfreq){
            maxfreq=v[i];
            ans=i+'a';
    }
    cout<<"maximum frequency is :"<<maxfreq<<"of "<<ans<<endl;
    return 0;
}

