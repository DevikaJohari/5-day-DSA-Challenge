#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
std::vector<int> AddElement(int size)
{
    std::vector<int> array;
    int element;
    while(1)
    {
        cin>>element;
        if(element==-1)
        {
            break;
        }
        else
        {
            array.push_back(element);
        }
    }
    return(array);
}
void mergesortedarr(vector<int>& arr1, int size1, vector<int>& arr2, int size2)
{
    int i,j,k;
    k=size1+size2-1;
    for(i=size1-1,j=size2-1;i>=0 && j>=0;k--)
    {
        if(arr1[i]>=arr2[j])
        {
            arr1[k]=arr1[i];
            i--;
        }
        else
        {
            arr1[k]=arr2[j];
            j--;
        }
    }
    while(i>=0)
    {
        arr1[k]=arr1[i];
        k--;
        i--;
    }
    while(j>=0)
    {
        arr1[k]=arr2[j];
        k--;
        j--;
    } 
    cout<<"Sorted Array: ";
    for(auto m=arr1.begin();m!=arr1.end();++m)
    {
        cout<<*m<<" ";   
    }
}
void PrintElement(std::vector<int> array)
    {
        for(auto i=array.begin();i!=array.end();++i)
        {
            cout<<*i<<" ";   
        }
        cout<<"\n";
}

int main()
{
    int m,n;
    std::vector<int> arr1,arr2;
    cout<<"Enter the sorted elements in First Array or -1 to end inserting \n";
    arr1=AddElement(m);
    cout<<"Enter the length of First Array \n";
    cin>>m;
    PrintElement(arr1);
    cout<<"Enter the sorted elements in Second Array or -1 to end inserting \n";
    arr2=AddElement(n);
    cout<<"Enter the length of Second Array \n";
    cin>>n;
    PrintElement(arr2);
    mergesortedarr(arr1,m,arr2,n);
    return 0;
}
