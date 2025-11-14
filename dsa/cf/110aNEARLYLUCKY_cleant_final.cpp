#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    std::string s;
    std::cin >> s;

    int lucky_digits_count = 0;

    for (char c : s) {
        if (c == '4' || c == '7') {
            lucky_digits_count++;
        }
    }

    if (lucky_digits_count == 4 || lucky_digits_count == 7) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
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