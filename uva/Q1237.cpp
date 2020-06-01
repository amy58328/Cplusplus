#include<bits/stdc++.h>

using namespace std;

struct fac
{
	string name;
	int high,low;
};

vector<fac>maker;

int main()
{
	int Case;
	cin >> Case;
	bool cc = 1;

	while(Case--)
	{	

		if(cc == 0)
		{
			cout << endl;
		}
		cc = 0;

		maker.clear();
		int n;
		cin >> n;
		while(n--)
		{
			string a;
			int b,c;
			cin >> a >> b>> c;
			maker.push_back((fac){a,c,b});
		}

		cin >> n;
		while(n--)
		{
			int price ;
			cin >> price;

			string ans ;
			int time  = 0;
			for(int i=0 ; i<maker.size();i++)
			{
				if(price <= maker[i].high && price>=maker[i].low)
				{
					ans = maker[i].name;
					time++;
					if(time >=2)
					{
						break;
					}
				}
			}

			if(time != 1)
				printf("UNDETERMINED\n");
			else
				cout << ans << endl;

		}

		
	}	
}