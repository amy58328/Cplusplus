#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#define loop(n) for(int i=0;i<n;i++)

using namespace std;

/*int hours[12];
double minute[60]; 

void table()
{
	loop(12)
	{
		if(i==0)
			hours[i]=360/12;
		else 
			hours[i]=360/12+(360/12)*i;
	}

	loop(60)
	{
		if(i==0)
			minute[i]=360/60;
		else
			minute[i]=360/60+(360/60)*i;
	}
}*/

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	/*memset(hours,0,sizeof(hours));
	memset(minute,0,sizeof(minute));

	table();*/

	double a,b,h,m;
	char no;
	double ans;
	while(~scanf("%lf %c %lf ",&a,&no,&b))
	{
		if(a==0 && b==0)
			return 0;

		h=(360/12)*a+(double)30/60*b;
		m=(360/60)*b;

		if(h>=m)
		{
			if((h-m)>180)
				ans=360-h+m;
			else
				ans=h-m;

		}

		else if(m>h)
		{
			if((m-h)>180)
				ans=360-m+h;
			else
				ans=m-h;
		}

		printf("%.3lf\n", ans);
	}



	return 0;
}
