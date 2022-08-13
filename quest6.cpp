#include<bits/stdc++.h>
using namespace std;
void findPalindromeStrings(vector<string> v1){
    int count = 0;
    for(auto j:v1){
        string temp = j;
        reverse(j.begin(), j.end());
        if(j==temp){
            cout<<temp<<" is a palindrome string"<<endl;
        }
        continue;
    }
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
    findPalindromeStrings(v);
    return 0;
}