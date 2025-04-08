#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m, vector<int>(n));
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }
     int sum=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==m-1||i+j==m-1){
                sum+=arr[i][j];
            }
        }
     }
     cout<<sum;
     return 0;
}