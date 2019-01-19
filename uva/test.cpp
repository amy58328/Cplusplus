#include<bits/stdc++.h>

using namespace std ;

int main()
{

	#ifdef DEBUG
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	string input ;
	bool out = 0;
	while(getline(cin , input))
	{
		int asc[150] = {0};
		int max = 0;

		if(input == "End. Bye Bye!")
			out = 1 ;

		for(int i=0 ; i<input.length() ; i++)
		{
			int sum = input[i];
			asc[sum]++ ;
			if(max < asc[sum])
				max = asc[sum];
		}

		for(int i=max ; i>0 ; i--)
		{
			for(int j=65 ; j<=122 ; j++)
			{
				if(asc[j] == i)
					printf("%c: %d\n",j,i );
			}
		}

		if(out != 1)
			cout << endl;
		else 
			break;
	}
	return 0 ;
}