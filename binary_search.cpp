#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>&v,int x){
    int l=0,r=v.size()-1;
    while(l<=r){
        int m=(l+r)/2;
        if(v[m]==x) return m;
        if(v[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main(){
    vector<int>a={1,3,5,7,9};
    cout<<bs(a,7);
}
