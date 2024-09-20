//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
         int a=0;
        int b=0;
        int ans;
        int n=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                a++;
            }
            if(arr[i]>arr[i+1]){
                b++;
            }
        }
        if(a==n-1){
            ans=1;
        }
        else if(b==n-1){
            ans=2;
        }
        else if(a<b){
            ans= 3;
        }
        else{
            ans=4;
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
        Solution obj;
        int res = obj.maxNtype(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends