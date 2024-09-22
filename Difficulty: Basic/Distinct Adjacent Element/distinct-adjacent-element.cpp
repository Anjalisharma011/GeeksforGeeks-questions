//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool distinctAdjacentElement(vector<int> &arr) {
        // code here
        unordered_map<int,int>map;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
            for(auto it:map){
                if(it.second>(n+1)/2){
                return false;
                }
            }
        }
          return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        vector<int> arr;
        stringstream ss(line);
        int num;
        while (ss >> num)
            arr.push_back(num);
        Solution ob;
        if (ob.distinctAdjacentElement(arr))
            cout << "true";
        else
            cout << "false";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends