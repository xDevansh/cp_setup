#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    string s1;
    unordered_set<char> username;
    getline(cin,s1);
    for(int i=0;i<size(s1);i++)
    {
        username.insert(s1[i]);
    }
    if((size(username))%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
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