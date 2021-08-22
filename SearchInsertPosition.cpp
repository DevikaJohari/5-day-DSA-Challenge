#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) 
{
    int size=nums.size();
    for(int i=0;i<size;i++)
    {
        if(nums[i]>=target)
        return(i);
    }
    return(size);
}
int main(){
    vector<int> arr;
    int input,target,value;
    cout<<"Enter the sorted elements in array or -1 to end inserting elements \n";
    while(1)
    {
        cin>>input;
        if(input==-1)
            break;
        else
        {
            arr.push_back(input);
        }
    }
    cout<<"Enter the target: ";
    cin>>target;
    value=searchInsert(arr,target);
    cout<<"Output: "<<value;
    return 0;
}