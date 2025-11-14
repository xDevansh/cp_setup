#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    string sentence;
    getline(cin,sentence);

    int num_lo{};
    int num_up{};

    for(int i=0;i<sentence.size();i++)
    {
        if((((int)sentence[i])>=65) && ((int)sentence[i]<=90))
        {
            num_up++;
        } 
        else{
            num_lo++;
        }
    }
    if(num_lo>=num_up)
    {
        transform(sentence.begin(),sentence.end(),sentence.begin(),
            [](char c)->char
            {
                return tolower(c);
            });
        cout<<sentence;
    }
    else
    {
        transform(sentence.begin(),sentence.end(),sentence.begin(),
            [](char c)->char
            {
                return toupper(c);
            });
        cout<<sentence;
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