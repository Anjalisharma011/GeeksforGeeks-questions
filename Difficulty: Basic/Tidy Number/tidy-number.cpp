//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isTidy(int N) {
       while(N>0){
           int digit1=N%10;
           N=N/10;
           int digit2=N%10;
           if(digit1<digit2)
           return 0;
       }
       return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.isTidy(N) << "\n";
    }
}
// } Driver Code Ends