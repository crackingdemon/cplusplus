#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    for(int i=0;i<n;){
        cin>>arr[i];
    }
int counter=1;
while(counter<n){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}cout<<endl;
}
