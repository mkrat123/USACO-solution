/*
ID:  manishm1
PROG: gift1
LANG: C++11
*/
#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main(){
    freopen("gift1.in","r",stdin);
freopen("gift1.out","w",stdout);
    int n,rs,fd;
    
    string s1,s2;
    
    vector<string> v;
    
    cin>>n;
    
    while(1){
        map<string, int> M;
        
        v.clear();
        
        for(int i=0;i<n;i++){
            cin>>s1;
            v.push_back(s1);
        }
        
        
        for(int i=0;i<n;i++){
            cin>>s1>>rs>>fd;
            if(fd!=0) M[s1]-=fd*(rs/fd);
            for(int j=0;j<fd;j++){
                cin>>s2;
                M[s2]+=rs/fd;
            }
        }
        
        for(int i=0;i<n;i++)
            cout<<v[i]<<" "<<M[v[i]]<<endl;
        
        if(cin>>n) cout<<endl;
        else break;
    }
}
