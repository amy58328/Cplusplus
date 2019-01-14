#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#define loop(i,n) for(int i=0;i<n;i++) 

using namespace std;

int main()
{
	int f_d,g_d;
	cin >> f_d;
	double f_str[f_d],f_leng[f_d];
	loop(i,f_d)
	{
		cin >> f_str[i];
		cin >> f_leng[i];
	}
	cin >> g_d;
	double g_str[g_d] , g_leng[g_d];
	loop(i,g_d)
	{
		cin >> g_str[i];
		cin >> g_leng[i];
	}
	//input end

	cout << min <<endl;




}
