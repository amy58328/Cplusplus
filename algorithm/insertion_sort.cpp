#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
#define loop(i,n) for(int i=0 ;i<n;i++)

using namespace std;

void insertion_sort(int in[], int size)
{
	for(int i=1 ; i<size ;i++)
	{
		
		for(int j=0 ;j<i;j++)
		{
			if(in[j] > in[i])
			{
				int sume = in[j] ;
				in[j] = in[i];
				in[i] = sume;
			}
		}
	}

	for(int i=0 ; i<size ; i++)
		cout << in[i] << " ";
	cout<< endl;
}

int main()
{
	int num;
	while( cin >> num)
	{
		int input[num];
		for(int i=0 ; i<num ; i++)
		{
			cin >> input[i];
		}

		insertion_sort(input,num);
	}
}
