#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of words you want:";
    cin>>n; 
    vector<string> v(n);
    cout<<"Enter the words:";
    for(int i=0;i<n;i++){
        string k;
        getline(cin>>ws,k);
        v[i] = k;
    }
    string j;
    cout<<"Enter the word you are looking for:";
    getline(cin>>ws,j);
    vector<string>::iterator it;
    it = find(v.begin(),v.end(),j);
    if(it!=v.end()){
        cout<<"String:"<<j<<" found at position:"<<it-v.begin();
    }
    return 0;
}