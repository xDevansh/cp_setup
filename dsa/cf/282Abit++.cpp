#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve(){
    int numStat{};
    cin>> numStat;
    int x{};
    string state;
    for(int i=0;i<numStat;i++)
    {
        cin>>state;
        if(state[0]=='+' || state[1]=='+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout<<x;
    
}

//-----------------------------------
int main() {
    // Speeds up input/output operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // This block of code is only executed when you are running the code
    // on your local machine. It will not be executed on the online judge.
    #ifndef ONLINE_JUDGE
        // Redirects input from input.txt
        freopen("input.txt", "r", stdin);
        // Redirects output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

    // If there are multiple test cases, you can use a loop
    int tt = 1;
    //cin >> tt; // Uncomment this line for multiple test cases
    while (tt--) {
        solve();
    }

    return 0;
}