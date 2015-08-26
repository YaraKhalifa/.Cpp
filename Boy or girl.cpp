#include <iostream>

using namespace std;

int main()
{
    string name;
    cin>>name;
    int cnt=0;
    bool ans=true;
    for(int i=0;i<name.length();i++){
        for (int j=i+1;j<(name.length());j++){
            if(name[i]==name[j]){
                ans=false;
            }
        }
        if(ans) cnt++;
        ans=true;
    }
    if(cnt%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
