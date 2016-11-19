#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float a[11],s;
	int z,n,max;
	cin>>n;
	s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
		//z=s/n;
	}
	z=s/n;
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}

	cout<<s;
	cout<<" ";
	cout<<z;
	cout<<" ";
	cout<<"max"<<max;
	system("pause");
}
