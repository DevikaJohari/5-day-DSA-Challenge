#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

std::vector<int> twoSum(std::vector<int>& arr, int target)
{
    std::vector<int> arr1;
    int i,j,size;
    size=arr.size();
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                arr1.push_back(i);
                arr1.push_back(j);
                return (arr1);
            }
        
        }
    }
    return (arr1);
}
int main()
{
    std::vector<int> arr,arrfinal;
    int target,input,l,i;
    cout<<"enter the length of array";
    cin>>l;
    for(i=0;i<l;i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    
    cout<<"enter the sum of no: ";
    cin>>target;
    arrfinal=twoSum(arr,target);
    for(auto i=arrfinal.begin();i!=arrfinal.end();++i)
    {
        cout<<*i<<" "; 
    }
    return 0;
    
}