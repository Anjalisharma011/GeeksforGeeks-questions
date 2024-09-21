//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int ans=0;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<arr1.size();i++){
           sum1+=arr1[i];
        }
        for(int i=0;i<arr2.size();i++){
            sum2+=arr2[i];
        }
      return abs(sum1-sum2);
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        // vector<int> v;
        int res = ob.findMissing(arr1, arr2);

        cout << res << endl;
        // cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends