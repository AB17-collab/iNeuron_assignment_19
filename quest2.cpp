#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of cities you want:"; 
    cin>>n;
    vector<string> v1(n);
    cout<<"Enter the names of cities:";
    for(int i=0;i<n;i++){
        string j;
        getline(cin>>ws,j); 
        v1[i] = j;
    }
    cout<<"Names of cities in unsorted order are:";
    for(auto k:v1){
        cout<<k<<" ";
    }
    cout<<"\n";
    sort(v1.begin(),v1.end());
    cout<<"Name of cities in sorted order is:"; 
    for(auto j:v1){
        cout<<j<<" ";
    }
    return 0;
}