// https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Arrays&category[]=Strings&category[]=Linked%20List&category[]=Stack&category[]=Recursion&category[]=Backtracking&sortBy=accuracy

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        
        if(st.empty()){
            return;
        }
        
        int ele = st.top();
        st.pop();
        
        clonestack(st, cloned);
        
        cloned.push(ele);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends