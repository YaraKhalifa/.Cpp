#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            if(arr[0]==0){
              cnt=0;
            }
       else if(arr[i]>=arr[k-1]&&arr[i]!=0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
