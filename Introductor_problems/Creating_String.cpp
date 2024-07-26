#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    vector<string>per;
    sort(s.begin(),s.end());

    do {

      per.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

     cout<<per.size()<<endl;
     for(auto x:per){
        cout<<x<<endl;
     }
    return 0;
}
