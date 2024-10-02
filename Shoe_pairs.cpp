//
/*
Pattern matching,return the count of the matching number of shoe pairs
example: 5
        7R 7L 8R 10R 10L

        O/P-2
*/
#include<iostream>
#include<map>
#include<cstring>
#include<vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<string>st;
   map<string,int>mp;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    st.push_back(s);
    mp[s]++;
   }
   int ans=0;
   for(auto it:st){
    string temp=it;
    int k=temp.size()-1;
    if(temp[k]=='L')
    temp[k]='R';
    else
    temp[k]='L';
    ans+=min(mp[it],mp[temp]);
    mp.erase(it);
    mp.erase(temp);
   }
   cout<<ans;
}