#include<iostream>
#include<vector>
using namespace std;

int bus(vector<int>& arr, int m) {
    // int count = 1; 
    // int remaining = m;

    // for(int i = 0; i < arr.size(); i++) {
    //     if(arr[i] <= remaining) {
    //         remaining -= arr[i]; 
    //     } else {
    //         count++;             
    //         remaining = m - arr[i]; 
    //     }
    // }

    // return count;

    int p=0;
    int b=0;
    for(int i=0;i<arr.size();i++){
        if(p+arr[i]<=m){
            p+=arr[i];
        }
        else{
        b++;
        }
    }
    if(p>0){
        b++;
    }
    return b;
}

int main() {
    int n, m;
    cout << "Enter number of groups: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter number of people in each group:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter bus capacity: ";
    cin >> m;

    int res = bus(arr, m);
    cout << "Minimum buses needed: " << res << endl;
    return 0;
}
