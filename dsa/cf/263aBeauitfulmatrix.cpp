#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    int find_row{0};
    int find_col{0};
    int num{};

    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cin>>num;
            if(num==1)
            {
                find_row=i;
                find_col=j;
            }
        }
    }

    int num_ofrow{};
    int num_ofcol{};
    num_ofcol=abs(find_col-2);
    num_ofrow=abs(find_row-2);
    cout<<num_ofcol+num_ofrow;
    
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