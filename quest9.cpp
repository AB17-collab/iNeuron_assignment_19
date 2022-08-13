#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of names you want to enter:";
    cin>>n;
    vector<string> v(n);
    cout<<"Enter the names:";
    for(int i=0;i<n;i++){
        string k;
        getline(cin>>ws,k);
        v[i] = k;
    }
    string j;
    cout<<"Enter the authentic name:";
    getline(cin>>ws,j);
    vector<string>::iterator it;
    it = find(v.begin(),v.end(),j);
    if(it!=v.end())
        cout<<j<<" can find the factorial of the number";
    else
        cout<<"Invalid user";

    return 0;
}