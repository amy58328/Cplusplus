#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#define loopi(n) for(int i=0;i<n;i++)
#define loopj(n) for(int j=0;j<n;j++)

using namespace std;


int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	int sis=0,sq=1;
	bool sun=1;
	char sha[10],er[10];
	double x1[10],x2[10],y1[10],y2[10],testx,testy;
	
	loopi(15)
	{
		scanf("%c ", &sha[i]);
		if(sha[i]=='*')
		{
			break;
			
		}
		scanf("%lf %lf %lf %lf", &x1[i] , &y1[i] , &x2[i], &y2[i], &er[i]);
		getchar();
		sis++;
	}//輸入矩陣的位子
	
	//cout <<sis<<endl;
	while(~scanf("%lf %lf",&testx,&testy))
	{
		if(testy==9999.9 && testx==9999.9)
			break;
			

		loopi(sis)
		{
			if((testx > x1[i] && testx < x2[i]) && (testy < y1[i] && testy > y2[i]))
			{	
				cout << "Point " << sq << " is contained in figure " << i+1<<endl;
				sun=0;
			}
			
			
		}

		if(sun)
		{
			cout << "Point " << sq << " is not contained in any figure"<<endl;
		}

		sq++;
		sun=1;
	}

	return 0;
}
