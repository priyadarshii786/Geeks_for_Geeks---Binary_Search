//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findMagicalNumber(int N, vector<int> &arr) {
        // code here
        // jai ganesh
        
        // --------------------------------------------------------------------------
        // Normal binary search hi iss question ka approach hai
        // int start = 0, end = N-1;
        // int mid = (start + end) / 2; // int mid = start + (end-start)/2; <------- bahut jagah ye use kiya ja raha ahi
        // while(start <= end)
        // {
        //     // int mid = (start + end) / 2;  <------ isko agar yaha likheng toh fir niche wala mid ka need nhi rhega.
        //     if(arr[mid] == mid)
        //         return mid;
        //     else if(mid > arr[mid])
        //         start = mid + 1;
        //     else
        //         end = mid - 1;
                
        //     mid = start + (end-start)/2; // ye mid iss liye likhte hai taaki hr ek step me mid ko update kr ske, as there is no such code apart from this written to get new mid in each step........ha agar first mid jo find kiye the usko agar while loop ke andar rkhenge toh fir iska jarurat nhi padega.
        // }
        // return -1;
        // --------------------------------------------------------------------------
        
        
        // ------ Naive approach
        for(int i=0;i<N;i++){
            if(arr[i]==i){
                return i;
                
            }
        }
        return -1; 
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.findMagicalNumber(N, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends