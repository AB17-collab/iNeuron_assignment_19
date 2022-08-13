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
    bool y = true;
    while(y){
        cout<<"Enter your choice: 1.Find a name 2.Delete a name";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                vector<string>::iterator it;
                string j;
                cout<<"Enter the name you want:";
                getline(cin>>ws,j);
                it = find(v.begin(),v.end(),j);
                if(it!=v.end()) 
                    cout<<"The name is present\n";
                else
                    cout<<"Name not found\n";
                break;
            }
            case 2:{
                string wanted;
                cout<<"Enter the name you want to delete:";
                getline(cin>>ws,wanted);
                int index;
                for(int i=0;i<v.size();i++){
                    if(v[i]==wanted){
                        index = i;
                        break;
                    }
                    else{
                        cout<<"Name not found\n";
                        exit(0);
                    }
                    v.erase(v.begin()+index,v.begin()+index+1);
                }
                break;
            }
            default:
                cout<<"Choose between 1 and 2";
        }
        char ch;
        cout<<"Would you like to continue? (y/n)";
        cin>>ch;
        if(ch=='y')
            y = true;
        else
            y = false;
    }
    cout<<"Thank you for using the system";
    return 0;
}