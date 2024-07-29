//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
      int left=0;
      int n=arr.size();
      int right=n-1;
    
      if(left>right){
          return -1;
      }
      while(left<=right){
          int mid=(left+right)/2;
          if(arr[mid]==k){
              return mid;
          }
         else {
             if(arr[mid]<k){
              left=mid+1;
          }
          else{
              right=mid-1;
          }
      }
      }
     
      
      return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends