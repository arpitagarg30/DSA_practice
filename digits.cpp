#include<iostream>
using namespace std;
int number(int n){
    if(n==0){
        return 0;
    }
    return 1+number(n/10);
}
int main(){
  int n;
  cin>>n;
  cout<<number(n);
}