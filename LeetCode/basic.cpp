#include <bits/stdc++.h>
using namespace std;
#define ARA_ARA ios_base::sync_with_stdio(false); cin.tie(NULL);

int firstMissingPositive(vector<int>& nums) {
    for(int i=0 ; i<nums.size();i++){
        while( (i+1) != nums[i] and ( nums[i] > 0 and nums[i] <= nums.size())){
            int x = nums[i];
            swap(nums[nums[i]-1],nums[i]);
            //if numbers are equal in the array
            // int x = nums[i];
            if(nums[x-1] == nums[i]){
                break;
            }
        }
    }
    //loop to find out which nums[i] is not matching with the index
    for(int i=0 ; i<nums.size();i++){
        // cout<<nums[i]<<" ";
        if(i+1!=nums[i]){
            return i+1;
        }
    }
    return nums.size()+1;
}
//code start  JAI SHREE RAM
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ARA_ARA
    
    // cout<<x<<" ";
    vector<int> v = {3,4,-1,1};
    cout<<firstMissingPositive(v);
    
    
	
	
    
    

    
    
    



}