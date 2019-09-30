#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int HR,MIN,hr,min,time;

	while(cin >> HR >> MIN >> hr >> min)
	{
		int cost = 0;
		if(HR > hr)
		{
			time = (1440 - 60 * HR - MIN) + (60 * hr + min);
		}

		else
		{
			time = (60 * hr + min) - (60 * HR + MIN);
		}


		cout << time << endl;
		if((time / 60) <= 2)
		{
			cout << "a" << endl;
			cost = time / 30 * 30;
		}

		if(2 < (time / 60) <= 4)
		{
			cout << "b" <<endl;
			cost = 4 * 30 + (time-120) / 30 * 40;
		}

		if((time / 60) >= 4)
		{
			cout << "c" <<
			cost = 4 * (30 + 40) + (time-240) / 30 * 60;
		}
			
		cout << cost << endl;
	}

	return 0;
}