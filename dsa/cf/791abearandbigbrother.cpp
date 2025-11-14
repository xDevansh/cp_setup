#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    int age1{};
    int age2{};
    cin>>age1;
    cin>>age2;

    int count{1};
    bool isWeightL{false};
    while(!isWeightL)
    {
        age1=3*age1;
        age2=2*age2;
        if(age1>age2)
        {
            cout<<count<<endl;
            isWeightL=true;
        }
        count++;

        
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