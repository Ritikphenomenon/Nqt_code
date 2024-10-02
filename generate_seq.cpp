

/*

Task 1- print the collatz sequence upto ending with 1 the sequence should be in the following way -> if the number is even:
F(n)=n//2
-> if the number is odd:
F(n)=3*n+1
infoy 65
This sequence should end until the last element of sequence is 1
Task-2
For the given integer from 1,n it should calculate the sequence of each k value l.e, 1<=k<=n
Calculate the maximum length of sequence list of each k value and return the maximum length of the sequence list of the k value and the k value itself
Task-3
For the given integer from 1.n it should calculate the sequence of each k value le, 1<=k<=n
Calculate the maximum value of the each sequence within the sequence list of each k value and return the maximum value of the sequence list of the k value and those k value itself
Input: 5
Output:
[5,16,8,4,2.1]
8,3
16.3
Input: 0
Output: Error!
Input: xyza
output: Error!
Input:-13
Output: Error!
Input: 5.5
Output: Error!
*/


#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>
#include<climits>

using namespace std;

bool ispositive(string s){
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i])){
            return false;
        }
        else{
        int n=s[i]-'0';
        if(n==0)
        return false;
        }
    }
    return true;
}

vector<int> generate(int n){
    vector<int>ans;
    while(n!=1){
        ans.push_back(n);
        if(n%2==0){
        n=n/2;
        }
        else{
        n=3*n+1;
        }
    }
    ans.push_back(1);
    return ans;
}

int generate1(int n){
    int ans=n;
    while(n!=1){
        if(n%2==0){
        n=n/2;
        ans=max(ans,n);
        }
        else{
        n=3*n+1;
        ans=max(ans,n);
        }
    }
    return ans;
}

void max_length(int n){
    int maxi=0,temp=0;
    int p1=INT_MIN,p2=0;
    for(int i=1;i<n;i++){
        int ans=generate1(i);
        if(maxi<=ans){
            maxi=ans;
            temp=i;
        }
    }
    cout<<maxi<<" "<<temp<<endl;
}

void max_value(int n){
    int maxi=0,temp=0;
    for(int i=1;i<n;i++){
        vector<int>ans=generate(i);
        if(ans.size()>=maxi){
            maxi=ans.size();
            temp=i;
        }
    }
    cout<<maxi<<" "<<temp<<endl;
}


int main(){
    string s;
    cin>>s;
    if(ispositive(s)){
      int n=stoi(s);
      cout<<"[";
      vector<int>ans=generate(n);
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
      cout<<"]"<<endl;

      max_length(n);
      max_value(n);

    }
    else{
        cout<<"Error!\n";
    }
}