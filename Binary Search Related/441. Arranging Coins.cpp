#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) {
    int l=0,h=n,ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        //int temp=mid(mid+1)
        if(mid<=2*n/(mid+1)){
            ans=mid;
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=arrangeCoins(n);
    cout<<"The answer is: "<<ans;
    return 0;
}
