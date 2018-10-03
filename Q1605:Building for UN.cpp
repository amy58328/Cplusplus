/*程式競賽week4 第一題
想法:
no
注意:
限制越少 自己想限制*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d",&n))
	{
		char a='A';
		printf("2 %d %d\n",n,n );
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout <<a;
			}
			cout<<endl;
			a++;
			if(a==91)
				a=97;
		}
		cout <<endl;
		a='A';

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout <<a;
				a++;
				if(a==91)
				a=97;

			}
			cout<<endl;
			a='A';
		}
	}	
	return 0;
}
