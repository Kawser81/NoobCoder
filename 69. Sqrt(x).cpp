#include<bits/stdc++.h>
using namespace std;

//mid=l+(h-l)/2; similar to (l+h)/2 to ignore overflow
//just add both side -l

int mySqrt(int x){
    int l=0,h=x,ans=0;
    if(x==0 || x==1){
        return x;
    }
    while(l<=h){
        int mid=l+(h-l)/2; //similar to (l+h)/2 to ignore overflow
        if(mid<=x/mid){ //mid*mid<=x is also similar
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
    int x;
    cin>>x;
    int ans = mySqrt(x);
    cout<<"The root of "<<x<<" is: "<<ans;
    return 0;
}
