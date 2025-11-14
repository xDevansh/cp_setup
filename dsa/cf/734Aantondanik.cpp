#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    int num_games{};
    string s1;
    cin>>num_games;
    cin>>s1;
    int anton_count{};
    int dainik_count{};
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='A')
        {
            anton_count++;
        }
        else{
            dainik_count++;
        }
    }

    if(anton_count>dainik_count)
    {
        cout<<"Anton";

    }
    else if(anton_count<dainik_count)
    {
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
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