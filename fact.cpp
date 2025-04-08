#include<iostream>
using namespace std;
int facto(int n){
    if(n==1||n==1){
        return 1;
    }
    return n*facto(n-1);
}
int nonZero(int res){
    int temp;
    while(res>0){
        res=res/10;
        temp=res%10;
        if(temp>0){
            return temp;
        }
    }
}
int main(){
    int n;
   cin>>n;
    int res=facto(n);
   cout<<"The factorial is:"<<res<<endl; 
   cout<<"Non zero value of factorial is:"<<nonZero(res)<<endl;
}