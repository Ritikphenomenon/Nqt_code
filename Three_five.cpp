

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

void solve() {
    string s;
    getline(cin, s);
    string st = s.substr(1, s.size() - 2); // Remove the first and last character
    cout<<st<<" "<<st.size()<<endl;
    vector<int> nums;
    int i = 0;
    
    while (i < st.size()) {
        string temp = "";
        while (i < st.size() && st[i] != ' ') {
            temp += st[i];
            i++;
        }
        if (!temp.empty()) {
            int a = stoi(temp);
            nums.push_back(a);
        }
        i++;
    }

    for (auto num : nums) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "ThreeFive\n";
        } else if (num % 5 == 0) {
            cout << "Five\n";
        } else if (num % 3 == 0) {
            cout << "Three\n";
        } else {
            cout << num << "\n";
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
}
