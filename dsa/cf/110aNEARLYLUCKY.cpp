#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
void solve()
{
    string nums1;
    cin>>nums1;

    vector<int> nums_list;
    transform(nums1.begin(),nums1.end(),back_inserter(nums_list),
        [](char c)->int
        {
            return atoi(&c);
        }
    );
    int count_og{};
    for(int i=0;i<nums1.size();i++)
    {
        if(nums_list[i]==7 || nums_list[i]==4)
        {
            count_og++;
        }  
    }
    
    stack<int> sd;
    vector<int> luckynum;
    int count=count_og;
    while (count > 0)
    {
        int digit = count%10;
        count /= 10;
        sd.push(digit);
    }
    while (!sd.empty())
    {
        luckynum.push_back(sd.top());
        sd.pop();
    }

    bool islucky_lucky=false;
    for(int j=0;j<luckynum.size();j++)
    {
        if(luckynum[j]==7 || luckynum[j]==4)
        {
            islucky_lucky=true;
        }
        else{
            islucky_lucky=false;
            break;
        }  
    }

    if(count_og==nums_list.size())
    {
        if(islucky_lucky)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else
    {
        if(islucky_lucky)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
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