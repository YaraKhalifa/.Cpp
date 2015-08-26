#include <iostream>

using namespace std;

int main()
{
    int n,c,maxi;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    maxi=c=arr[0][1];
    for(int i=1;i<n;i++){
       c=c+arr[i][1]-arr[i][0];
       if(maxi<c){
        maxi=c;
       }
    }
    cout<<maxi<<endl;
    return 0;
}
