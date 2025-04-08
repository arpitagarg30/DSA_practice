#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<m;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
            }
        }
            else{
                for(int j=n-i;j>=0;j--){
                cout<<arr[i][j]<<" ";
                }
            }
        }
    }
