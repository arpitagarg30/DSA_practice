#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=10;
    vector<int>arr(m);
    vector<int>a;
    arr[0]=1;
    int fact=1;
    for(int i=1;i<m;i++){
        fact=fact*i;
        arr[i]=fact;
    }
    int l=0;
    for(int j=9;j>=0;j--){
      if(n>=arr[j]){
        n=n-arr[j];
        a.push_back(j);
      }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
    cout<<a[i];
    }
}