#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class pryamoug
{
public:
	int a,b;
int gets()
{
 return a*b;
}
int getp()
{
	return 2*(a+b);
}
};
void main()
{
pryamoug A;
A.a=2;
A.b=12;
cout<<A.gets();
cout<<A.getp();
system("pause");
}