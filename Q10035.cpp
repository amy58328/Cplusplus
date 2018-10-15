#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std ;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif


	int n1,n2;
	while(~scanf("%d %d",&n1,&n2))
	{
		if(n1==0 && n2==0)
			break;
		//cout <<n1 << " " << n2<<endl;
		if(n2>n1)
		{
			int sum;
			sum=n2;
			n2=n1;
			n1=sum;
		}

		int a1[100],a2[100],b1=0,b2=0,time=0;
		memset(a1,0,sizeof(a1));
		memset(a2,0,sizeof(a2));


		while(n1>0)
		{
			a1[b1]=n1%10;
			b1++;
			n1/=10;

		}

		while(n2>0)
		{
			a2[b2]=n2%10;
			b2++;
			n2/=10;
		}

		for(int i=0;i<b1;i++)
		{
			if((a1[i]+a2[i])/10>0)
			{
				time++;
				a1[i+1]++;
			}

		}

		//cout <<time;
		if(time==0)
			cout <<"No carry operation." <<endl;
		else if(time==1)
			cout << "1 carry operation."<<endl;
		else 
			cout <<time << " carry operations."<<endl;

	}
}
