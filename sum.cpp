#include<iostream>
#include<vector>
using namespace std;
int summ(int n,vector<int>& arr){
   if(n==0){
    return 0;
   }
   return arr[n-1]+summ(n-1,arr);
}
int main(){int n;
    cin>>n;
   vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum is:"<<summ(n,arr);
}