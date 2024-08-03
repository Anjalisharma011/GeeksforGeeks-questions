//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int>ans;
            int count1=0;
            int count2=0;
            int count3=0;
            int count4=0;
            for(char c:s){
                if(c>='A' && c<='Z'){
                    count1++;
                }
                else if(c>='a' && c<='z'){
                    count2++;
                }
                 else if(c>='0' && c<='9'){
                    count3++;
                }
                else{
                    count4++;
                }
            }
            ans.push_back(count1);
              ans.push_back(count2);
                ans.push_back(count3);
                  ans.push_back(count4);
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends