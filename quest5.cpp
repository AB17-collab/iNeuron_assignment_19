#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void checkWrongPassword(vector<string> v1){
    int count = 0;
    for(auto j:v1){
        bool flag = false;
        for(auto i:j){
            if(i=='@')
                flag = true;
        }
        if(!flag){
            cout<<j<<" ";
            count++;
        }
    }
    cout<<"\n";
    if(!count)
        cout<<"There's no invalid email";
    else
        cout<<count<<" emails are invalid";
}
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
    checkWrongPassword(v);
    return 0;
}