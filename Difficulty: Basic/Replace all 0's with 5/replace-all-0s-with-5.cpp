//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string s=to_string(n);
        for(char &c:s){
            if(c=='0'){
                c='5';
            }
        }
        return stoi(s);
    
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;
    }
}
// } Driver Code Ends