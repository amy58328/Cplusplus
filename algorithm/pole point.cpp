// 練習struct 
// 題目網址:https://zerojudge.tw/ShowProblem?problemid=d555

#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>

#define loop(i,n) for(int i=0;i<n;i++) 

using namespace std;

struct point
{
	int x;
	int y;
};

bool cmp(point a , point b)
{
	return a.y>b.y||(a.y==b.y)&&(a.x>b.x);
}

int main()
{
	int time;
	for(int n=1;~scanf("%d",&time) ; n++)
	{
		point p[time],a;
		loop(i,time)
			scanf("%d %d" , &p[i].x , &p[i].y);

		sort(p,p+time,cmp);

		int j=0;
		int ans[1000];

		a.x = -1;
		a.y = 100000;

		loop(i,time)
		{
			
			if(a.y != p[i].y && a.x < p[i].x)
			{
				ans[j] = i;
				j++;
				a = p[i];
			}

		}

		printf("Case %d:\nDominate Point: %d\n",n,j );
		loop(i,j)
		{
			printf("(%d,%d)\n",p[ans[i]].x,p[ans[i]].y );
		}
	}
	return 0;	


}

