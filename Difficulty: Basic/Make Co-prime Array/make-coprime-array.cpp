//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int countCoPrime(const vector<int>& arr) {
        // Complete the function
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            if(__gcd(arr[i],arr[i+1])!=1){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.countCoPrime(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends