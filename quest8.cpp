#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int abs(int k){
    if(k>0)
        return k;
    else
        return (-1*k);
}
int findShortestDist(vector<string> &v,string word1,string word2){
    int shortest = INT32_MAX;
    int w1 = INT32_MAX,w2 = INT32_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]==word1)
            w1 = i;
        if(v[i]==word2) 
            w2 = i;
        if(w1!=INT32_MAX || w2!=INT32_MAX)
            shortest = min(shortest,abs(w1-w2));
    }
    return shortest;
}
int main(){
    int n;
    cout<<"Enter the number of strings:";
    cin>>n;
    cout<<"Enter the strings:";
    vector<string> v(n);
    for(int i=0;i<n;i++){
        string k;
        getline(cin>>ws,k);
        v[i] = k;
    }
    string word1,word2;
    cout<<"Enter the words you would like to look for:";
    getline(cin>>ws,word1);
    getline(cin>>ws,word2);
    int sd = findShortestDist(v,word1,word2);
    cout<<"The required answer:"<<sd; 
    return 0;
}