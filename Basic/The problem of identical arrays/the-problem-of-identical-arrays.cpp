//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n);


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int i;
        for(i = 0; i < n; i++){
            cin>> a[i];
        }
        for(i = 0; i < n; i++){
            cin>> b[i];
        }
        cout << check(a, b, n) << endl;
        
    }
	return 0;
}
// } Driver Code Ends


int check(int *a, int *b, int n){
    // Complete the function
    // jai ganesh
    
    sort(a, a+n);
    sort(b, b+n);
    
    for(int i=0; i<n; i++){
    //---------------------------------------------------------------------------
        if(a[i]!=b[i])
        return 0;
        
    /*  if(a[i]==b[i])
        return 1;
        aisa nahi likh skte because loop me jaayega then 1st element ke match hote hi '1' return kr dega, and pura array ko traverse bhi nahi kr paayega
    */
    // ---------------------------------------------------------------------------
    }
    return 1;
}