#include <iostream>

using namespace std;

int main()
{
   int x=0;
   int n;
   cin>>n;
   string arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(arr[i]=="X++"){
        x++;
    }else if(arr[i]=="++X"){
    ++x;
    }else{
    x-=1;
    }
   }
   cout <<x<<endl;
    return 0;
}
