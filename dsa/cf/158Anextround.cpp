#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve(){
    int partic{};
    int condPlace{};
    cin>>partic;

    cin>>condPlace;
    int arrScore[partic];
    int count{};
    for (int i = 0; i < partic; i++) {
        cin >> arrScore[i];
    }
    for(int i=0;i<partic;i++)
    {
        if(arrScore[i]>=0 && arrScore[i]>=arrScore[condPlace-1])
        {
            ++count;
        }

    }
    cout<<count<<endl;
    
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