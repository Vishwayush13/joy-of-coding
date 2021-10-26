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
    for(int i=0;i<v.size();i++){
        maxfreq=max(v[i],maxfreq);
    }
    cout<<"maximum frequency is :"<<maxfreq<<endl;
    return 0;
}

