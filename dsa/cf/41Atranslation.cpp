#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    if(s1.size()==s2.size())
    {
        bool is_trans=true;
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==s1[i])
            {
                if(i==s2.size()-1)
                    cout<<"YES";
            }
            else{
                is_trans=false;
                break;
            }
        }
        if(!is_trans)
        {
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
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