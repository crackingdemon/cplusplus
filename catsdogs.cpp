#include <iostream>
using namespace std;
int main(){
 
 int t,i,d,c,l;
 cin>>t;
 for(i=0;i<t;i++){
     cin>>c>>d>>l;
     if(l%4==0){
         if(c<=2*d){
             if(l>=4*d ){
                 cout<<"yes"<<endl;
             }
             else{
                 cout<<"no";
             }
         }
         else if(c>2*d){
             if(l<=4*(c+d)){
                 cout<<"yes"<<endl;
             }
             else{
                 cout<<"no"<<endl;
             }
         }
     }
     else{
         cout<<"no"<<endl;
     }
     
 }
 





 return 0;
}