//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum number of moves required.
    int minMoves(vector<int> &arr) {
        // code here.
       
        int n=arr.size();
         int count=n;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==count){
                count--;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.minMoves(arr) << endl;
    }
}
// } Driver Code Ends