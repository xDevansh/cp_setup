#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve(){
    int rows{};
    int columns{};
    cin>>rows>>columns;

    if(rows>0)
    {
        if(columns>1)
        {
            if(rows%2==0)
            {
                cout<<(columns*(rows/2))<<endl;

            }
            else
            {
                if(columns%2==0)
                {
                    cout<<(columns*(rows/2))<<endl;
                }
                else{
                    cout<<(columns*((rows-1)/2))+((columns-1)/2)<<endl;
                }
            }
        }
        else{
                    if(columns==1)
                    {
                        if(rows%2==0)
                        {
                            cout<<(rows/2)<<endl;
                        }
                        else{
                            cout<<((rows-1)/2)<<endl;
                        }
                    }
                    else
                    {
                        cout<<0<<endl;
                            
                    }

                
                
        }   
    }
    else
    {
        cout<<0<<endl;
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