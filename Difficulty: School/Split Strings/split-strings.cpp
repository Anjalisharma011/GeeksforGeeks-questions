//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        vector<string>ans;
        string s1="";
        string s2="";
        string s3="";
        for(char c:S){
            if (c>='A' && c<='Z' || c>='a'&& c<='z'){
                s1+=c;
            }
            else if
                (c>='0' && c<='9' ){
                    s2+=c;
                }
                else{
                    s3+=c;
                }
            
        }
        ans.push_back(s1);
         ans.push_back(s2);
          ans.push_back(s3);
        return ans;
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends