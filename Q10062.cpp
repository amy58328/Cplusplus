#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>

using namespace std;

int main()
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif 

	string a;
	bool pri=0;
	while(getline(cin,a))
	{
		if(pri==1)
			cout << endl;
		int b[150];
		memset(b,0,sizeof(b));
		int big=0,sma=150,max_count=0;

		for(int i=0;i<a.size();i++)
		{
		//	cout <<a[i]<<endl;
			b[(int)a[i]]++;

			if((int)a[i]>big)
				big=(int)a[i];

			if((int)a[i]<sma)
				sma=(int)a[i];

			if(b[(int)a[i]]>max_count)
				max_count=b[(int)a[i]];
		}

		//cout<<sma<<endl;
		//cout <<big<<endl;

		for(int i=1;i<=max_count;i++)
		{
			for(int j=big;j>=sma;j--)
			{
				if(b[j]==i)
					cout <<j<<" " << i<<endl;
			}
		}
		
		pri =1;


	}
	return 0;
}
