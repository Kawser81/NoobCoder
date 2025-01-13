#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>&nums, int l, int r){
    while(l<r){
        int mid=(l+r)/2;
        //sorted gula bad dite hobe
        //cz unsorted gular majhe lowest value thakbe
        if(nums[mid]>=nums[r]){// thats mean danpashe unsorted gula
                //cz normally binary sort a danpashe boro thake
            l=mid+1;
        }
        else {
            r=mid;
        }
    }
    return nums[l];
}

int main(){
    vector<int>nums={3,4,5,1,2};
    int n=nums.size();
    int l=0;
    int r=n-1;
    int ans=findMin(nums,l,r);
    cout<<ans<<endl;
    return 0;
}
