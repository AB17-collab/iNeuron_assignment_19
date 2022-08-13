#include<iostream>
#include<cstring>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<char,bool> ump;
vector<int> findVowelsInStrings(vector<string> v){
    vector<int> countVector;
    for(auto i:v){
        ump['a'] = true;
        ump['e'] = true;
        ump['i'] = true;
        ump['o'] = true;
        ump['u'] = true;
        int count = 0;
        for(auto j:i){
            if(j=='A'||j=='E'||j=='I'||j=='O'||j=='U')
                j = j+32;
            if(ump[j]){
                count++;
                ump[j] = false;
            }
        }
        countVector.push_back(count);
    }
    return countVector;
}
int main(){
    int n;
    cout<<"Enter the number of strings you want:"; 
    cin>>n;
    vector<string> v1(n);
    cout<<"Enter the string values in the array:";
    for(int i=0;i<n;i++){
        string j;
        getline(cin>>ws,j); 
        v1[i] = j;
    }
    vector<int> v2 = findVowelsInStrings(v1);
    cout<<"The count of vowels in each string are:\n";
    for(auto j:v2){
        cout<<j<<" ";
    }
    return 0;
}