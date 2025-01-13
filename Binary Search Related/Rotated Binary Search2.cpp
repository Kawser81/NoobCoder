#include<bits/stdc++.h>
using namespace std;

int rotatedbinarysearch(vector<int>&arr, int target, int l, int r){
    while(l<=r){
        int mid=l+(r-l)/2;

        if(target==arr[mid]){
            return mid;
        }
        if(arr[mid]>=arr[l]){ //thats means the left side is sorted
            if(target>=arr[l] && target<arr[mid]){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        else{ //the right side is sorted
            if(arr[mid]<target && target<=arr[r]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    }
    return -1;
}
//here the goal is to element the half of the array/vector
//maintain the time complexity O(logn)

int main(){
    vector<int>arr={25,30,35,5,10,15,20};
    int target;
    cout<<"Take the number: ";
    cin>>target;
    int l=0;
    int r=arr.size()-1;
    int ans=rotatedbinarysearch(arr,target,l,r);
    if(ans==-1){
        cout<<"Not Found"<<endl;
    }
    else {
        cout<<"Found at index: "<<ans<<endl;
    }
    return 0;
}
