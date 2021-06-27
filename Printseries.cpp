#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,j,rows;

    cout << " Enter your number: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<i;
	cout<<endl;
   }	
}