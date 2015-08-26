#include <iostream>

using namespace std;

int main()
{
    bool ans=false;
    string p;
    cin>>p;
    for(int i=0;i<p.length();i++){
        if(p[i]=='H'|| p[i]=='Q'|| p[i]=='9' ){
            ans=true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
