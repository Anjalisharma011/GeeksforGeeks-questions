//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minTime(vector<int>& arr1, vector<int>& arr2) {
        // code here.
        int sum1=0;
        int sum2=0;
        for(int i=0;i<arr1.size();i+=2){
            sum1+=arr1[i];
        }
        for(int i=1;i<arr2.size();i+=2){
            sum1+=arr2[i];
        }
          for(int i=1;i<arr1.size();i+=2){
            sum2+=arr1[i];
        }
        for(int i=0;i<arr2.size();i+=2){
            sum2+=arr2[i];
        }
        return min(sum1,sum2);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    while (t--) {
        // Read input for arr1
        string input;
        getline(cin, input);
        stringstream ss1(input);
        vector<int> arr1;
        int num;
        while (ss1 >> num) {
            arr1.push_back(num);
        }

        // Read input for arr2
        getline(cin, input);
        stringstream ss2(input);
        vector<int> arr2;
        while (ss2 >> num) {
            arr2.push_back(num);
        }

        Solution solution;
        cout << solution.minTime(arr1, arr2) << endl;
    }
    return 0;
}

// } Driver Code Ends