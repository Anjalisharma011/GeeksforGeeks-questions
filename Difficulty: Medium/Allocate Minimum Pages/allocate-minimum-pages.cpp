//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
               if (n < m) {
            return -1;
        }

        int start = *std::max_element(arr, arr + n);
        long long end = std::accumulate(arr, arr + n, 0LL);
        long long result = end;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (isPossible(arr, n, m, mid)) {
                result = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return result;
    }

private:
    // Helper function to check if it is possible to allocate books such that
    // no student reads more than curr_min pages.
    bool isPossible(int arr[], int n, int m, long long curr_min) {
        int studentsRequired = 1;
        long long curr_sum = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] > curr_min) {
                return false;
            }
            if (curr_sum + arr[i] > curr_min) {
                studentsRequired++;
                curr_sum = arr[i];
                if (studentsRequired > m) {
                    return false;
                }
            } else {
                curr_sum += arr[i];
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends