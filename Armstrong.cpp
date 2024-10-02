#include<iostream>
#include<vector>
using namespace std;

int armstrong(int n){
    int sum=0;
    int k=n;
    while(n>0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==k){
        return true;
    }
    else
    return false;
}

int main(){
    string s;
    getline(cin,s);
    string t=s.substr(1,s.size()-2);
    int i=0;
    vector<int>v;

    while(i<t.size()){
        string temp="";
        while(i<t.size() && t[i]!=','){
            temp=temp+t[i++];
        }
        int a=stoi(temp);
        v.push_back(a);
        i++;
    }

    for(int i=0;i<v.size();i++){
        cout<<armstrong(v[i])<<endl;
    }

}