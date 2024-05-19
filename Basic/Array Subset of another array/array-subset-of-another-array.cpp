//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends




string isSubset(int a1[], int a2[], int n, int m) {
    // jai ganesh
    
    sort(a1, a1+n);
    sort(a2, a2+m);
    
    int i=0, j=0;
    // ---------------------------------------------------------------------------
    // this block of code must be memorised as agar element match ho raha hai then a2 me increment kr rhe hai(ie; j) and agar nahi match kr rha hai then a1 me increment kr rhe hai(ie; i)
    while(i<n && j<m){
        if(a1[i]==a2[j]){
            j++;
        }
        i++;
    }
    
    // ---------------------------------------------------------------------------
    if(j==m)
    return "Yes";
    
    else
    return "No";
}