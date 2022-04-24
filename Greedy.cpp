#include <bits/stdc++.h>
using namespace std;

bool tmp(pair <int,int> x, pair <int,int> y){
    return x.second<y.second;
}

int main(){
    cout<<"Selamat datang"<<endl
    int n; 
    pair <int,int> act[10000];
    cin>>n;
    for(int i=1;i<=n; i++){
        cin>>act[i].first>>act[i].second;
    }
    sort(act+1,act+n+1,tmp);
    for(int i=1; i<=n; i++){
        cout<<act[i].first<<" "<<act[i].second<<endl;
    }
    int idx = 1, total = 1;
    for(int i=2; i<=n; i++){
        if(act[idx].second<act[i].first){
            total++; idx = i;
        }
    }
    cout<<total<<endl;
}
