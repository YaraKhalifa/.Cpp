#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ip[n];
    int op[n];
    for(int i=0;i<n;i++){
        cin>>ip[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ip[j]==i+1){
                op[i]=j+1;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<op[i]<<" ";
    }
    cout<<endl;
    return 0;
}
