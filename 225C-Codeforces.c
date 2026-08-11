#include <bits/stdc++.h>
using namespace std;

int main(){
    int num; cin>>num;
    int pointer=0;
    for(int i=0;i<num;i++){
     int n; cin>>n;
     string c; cin>>c;
     for(int j=0;j<n;j++){
        if(c[j]=='R'){
            pointer++;
        }
        else if(c[j]=='L'){
            pointer++;
            break;
        }
     }
     cout<<pointer<<"\n";
     pointer=0;

    }

}
