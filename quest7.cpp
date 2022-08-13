#include<bits/stdc++.h>
using namespace std;
int isValid(string s) {
    unordered_set<string> st;
    
    int counter = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.')
        counter++;
    }
    
    if(counter!=3)
        return false;
    
    for(int i=0;i<256;i++){
        st.insert(to_string(i));
    }
    
    counter = 0;
    string temp = "";
    for(int i=0;i<s.length();i++){
        if(s[i]!='.'){
            temp += s[i];
        }
        else{
            if(st.count(temp)!=0)
                counter++;
            temp = "";
        }
    }
    if(st.count(temp)!=0)
        counter++;
        
    if(counter==4)
        return true;
    else
        return false;
}
int main(){
    string k;
    cout<<"Enter an IP address:";
    cin>>k;
    bool valid = isValid(k);
    if(valid)   
        cout<<"The IP address is valid";
    else
        cout<<"The IP address isn't valid";

    return 0;
}