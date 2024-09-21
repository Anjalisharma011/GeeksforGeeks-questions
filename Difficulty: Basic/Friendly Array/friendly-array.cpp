//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int sum=0;
        int n=arr.size();
         sum+=abs(arr[n-1]-arr[0]);
        for(int i=1;i<arr.size();i++){
            sum+=abs(arr[i-1]-arr[i]);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.calculateFriendliness(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends