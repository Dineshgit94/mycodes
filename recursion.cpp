#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void fun(vector<int> nums, int n , int i)
{
    if(i==n)
    {
        return;
    }
    else
    {
         fun(nums,n,i+1);
         cout<<nums[i];
    }
   


}
int main()
{
    int num;
    cin >> num;
    vector<int> nums(num);
    
    for( int i = 0; i<num ; i++)
    {
        cin>>nums[i];
    }
 fun(nums,num, 0);
  

}
