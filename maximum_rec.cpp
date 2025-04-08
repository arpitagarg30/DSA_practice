#include<iostream>
#include<vector>
using namespace std;
int maxi(vector<int>&arr,int n){
    if(n==1){
      return arr[0];
    }
    return max(arr[n-1],maxi(arr,n-1));
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum element is:"<<maxi(arr,n);
}