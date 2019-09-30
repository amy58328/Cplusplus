#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int ans[5][23];
void show(int a,int index)
{
	if(a == 1)
	{
		for(int i=0 ; i<5 ; i++)
		{
			ans[i][6*index+4] = 1;
		}
	}
	else if(a == 2)
	{
		for(int i=0 ;i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
		}
		ans[1][6*index+4] = 1;
		ans[3][6*index] = 1;
	}
	else if(a == 3)
	{
		for(int i=0 ;i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
		}
		ans[1][6*index+4] = 1;
		ans[3][6*index+4] = 1;
	}
	else if(a == 4)
	{
		for(int i=0 ; i<2 ; i++)
		{
			ans[i][6*index] = 1;
			ans[i][6*index+4] = 1;
		}

		for(int i=0 ; i<5 ; i++)
		{
			ans[2][6*index+i] = 1;
		}

		ans[3][6*index+4] = 1;
		ans[4][6*index+4] = 1;
	}
	else if(a == 5)
	{
		for(int i=0 ;i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
		}
		ans[1][6*index] = 1;
		ans[3][6*index+4] = 1;
	}
	else if(a == 6)
	{
		for(int i=0 ;i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
		}
		ans[1][6*index] = 1;
		ans[3][6*index] = 1;
		ans[3][6*index+4] = 1;
	}
	else if(a == 7)
	{
		for(int i=0 ; i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[i][6*index+4] = 1;
		}

	}
	else if(a == 8)
	{
		for(int i=0 ; i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
			ans[i][6*index] = 1;
			ans[i][6*index+4] = 1;

		}
	}
	else if(a == 9)
	{
		for(int i=0 ; i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[2][6*index+i] = 1;
			ans[4][6*index+i] = 1;
			ans[i][6*index] = 1;
			ans[i][6*index+4] = 1;

		}
		ans[3][6*index] = 0;
	}
	else if(a == 0)
	{
		for(int i=0 ; i<5 ; i++)
		{
			ans[0][6*index+i] = 1;
			ans[4][6*index+i] = 1;
			ans[i][6*index] = 1;
			ans[i][6*index+4] = 1;

		}
	}

}

void init()
{
	for(int i=0 ; i <23 ; i++)
	{
		for(int j=0 ; j <5 ; j++)
			ans[j][i] = 0;
	}
}
int main()
{
	int n;
	cin >> n;
		init();
		for(int i=0 ; i<4; i++)
		{
			int temp ;
			temp = n%10;
			n /= 10;

			show(temp,abs(i-3));
		}

		for(int i=0 ; i<5 ; i++)
		{
			for(int j=0 ; j<23 ; j++)
			{
				if(ans[i][j] == 1)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
}