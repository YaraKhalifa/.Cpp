#include <iostream>

using namespace std;

int main()
{
    int n,cnt;
    cin>>n;
    cnt=0;
    string color;
    cin>>color;
    for(int i=0;i<n-1;i++){
        if(color[i]==color[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
