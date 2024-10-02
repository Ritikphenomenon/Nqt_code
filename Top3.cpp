/*
To calculate the maximum marks of the 3 students
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    string s;
    getline(cin,s);

    string temp="";
    int i=0;

    while(s[i]!=' '){
        temp=temp+s[i++];
    }

    int k=stoi(temp);
    i++;

    temp="";

    while(s[i]!=' '){
        temp=temp+s[i++];
    }

    int n=stoi(temp);
    i++;

    vector<pair<int,string>>v;

    while(i<s.size()){
        temp="";
        while(s[i]!=' '){
            temp=temp+s[i++];
        }
        int l=stoi(temp);
        temp="";
        i++;
        while(i<s.size() && s[i]!=' '){
            temp=temp+s[i++];
        }
        i++;
        v.push_back({l,temp});
    }
    
    sort(v.begin(),v.end(),greater<pair<int,string>>());
    for(i=0;i<k;i++){
        cout<<v[i].second<<":"<<v[i].first<<endl;
    }

}