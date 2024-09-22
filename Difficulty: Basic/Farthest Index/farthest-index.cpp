//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findIndex(vector<int>& arr, int x) {
        // code
        int ans=-1;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==x){
                ans=i+1;
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.findIndex(arr, k);
        cout << res << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends