#include<iostream>
using namespace std;
int main()
{
   int a=0;
   int b=10;
   int c=20;
   int inc=19;
   for(int i=1;i<=4;i++)
   {
   	cout<<a<<"\t"<<b<<"\t"<<c<<endl;
   	a=a+inc;
   	b++;
   	c--;
   }
}