#include <bits/stdc++.h>
using namespace std;

//-----------------------------------
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1,Node* next1=nullptr)
    {
        data = data1;
        next = next1;
    }
};
void solve() {
    int arr[5]={1,2,3,4,5};
    
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i=1;i<(sizeof(arr) / sizeof(arr[0]));i++){
        Node* temp= new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    
    
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
    cin >> tt; // Uncomment this line for multiple test cases
    while (tt--) {
        solve();
    }

    return 0;
}