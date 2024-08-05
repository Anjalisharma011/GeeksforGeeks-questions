//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		int EqualString(string s, string t)
		{
		    // Code here
		    unordered_map<char,int>m1,m2,m3,m4;
		    int n1=s.size();
		    int n2=t.size();
		    if(n1!=n2){
		        return 0;
		    }
		    for(int i=0;i<n1;i++){
		        if(i%2==0){
		            m1[s[i]]++;
		            m2[t[i]]++;
		        }
		        else{
		            m3[s[i]]++;
		            m4[t[i]]++;
		        }
		    }
		    if(m1!=m2 || m3!=m4){
		        return 0;
		    }
		    return 1;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string s, t;
	    cin >> s >> t;
	    Solution ob;
	    int ans = ob.EqualString(s, t);
	    cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends