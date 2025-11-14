#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    string s1;
    getline(cin,s1);
    multiset<char> equation;

    for(int i=0;i<s1.size();i+=2)
    {
        equation.insert(s1[i]);
    }
    bool isFirstEl{true};
    for(auto it:equation)
    {
        if(!isFirstEl)
        {
            cout<<"+";
        }
        cout<<it;
        isFirstEl=false;
    }
    
}

//-----------------------------------
int main() {
    // Speeds up input/output operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // This block of code is only executed when you are running the code
    // on your local machine. It will not be executed on the online judge.
    //only run in debug
    #ifndef _DEBUG
        #ifndef ONLINE_JUDGE
            // Redirects input from input.txt
            freopen("input.txt", "r", stdin);
            // Redirects output to output.txt
            freopen("output.txt", "w", stdout);
        #endif
    #endif

    // If there are multiple test cases, you can use a loop
    int tt = 1;
    //cin >> tt; // Uncomment this line for multiple test cases
    while (tt--) {
        solve();
    }

    return 0;
}