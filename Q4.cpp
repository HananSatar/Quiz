#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	int a[5];
	int b[5];
	int c[10];
	int i;
		cout<<"Enter Array of a"<<endl;// 
		for(int i=0;i<5;i++)

	cin>>a[i];
		cout<<"Enter Array of b"<<endl;
		for(int i=0;i<5;i++)
	
	cin>>b[i];
	
	int count=0;
	for(int i=0;i<5;i++)
	{
		if (count<10)
          {

	c[count]=a[i];
	count=count+2;
         }  
   }
 int count2=1;
       for(int j=0;j<5;j++)
	{
		if (count2<10)
        {

	c[count2]=b[j];
	count2=count2+2;         
         }
         }
	     	for(int i=0;i<10;i++)
	     //	cout<<"Array1"<<a[i];
	     //	cout<<"Array2"<<b[j];
		cout<<c[i]<<endl;
	
}
