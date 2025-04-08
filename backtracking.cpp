// Backtracking 

#include<iostream>
#include<vector>
using namespace std;

void generateSubsets(vector<int> &nums, int index, vector<int> &current)
{
    if(index==nums.size())
    {
        //print the subset
        cout<<"[";
        for(int num: current)
        {
            cout<<num<<" ";     //nums={1,2}
        }
        cout<<"]"<<endl;
        return;
    }

    //Choice 1: include nums[index]
    current.push_back(nums[index]);
    generateSubsets(nums,index+1,current);

    //backtrack(remove last added element)
    current.pop_back();

    //Choice 2: exclude nums[index]
    generateSubsets(nums, index+1, current);

}

int main()
{
    vector<int> nums={1,2,};
    vector<int> current(0);
    generateSubsets(nums, 0, current);
    return 0;
}