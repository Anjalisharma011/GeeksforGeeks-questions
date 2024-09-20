//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n/2;i++){
            sum1+=arr[i];
        }
        for(int i=n/2;i<n;i++){
            sum2+=arr[i];
        }
        return abs(sum1-sum2);
    }
};


//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends