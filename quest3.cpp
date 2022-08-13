#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows of string array you want:";
    cin>>n;
    vector<vector<string> > v;
    cout<<"Enter the values:\n";
    for(int i=0;i<n;i++){
        int m;
        cout<<"Enter the number of words for the row:";
        cin>>m;
        vector<string> v2;
        for(int j=0;j<m;j++){
            string k;
            getline(cin>>ws,k);
            v2.push_back(k);
        }
        v.push_back(v2);
    }
    cout<<"The 2D array of strings:\n";
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}