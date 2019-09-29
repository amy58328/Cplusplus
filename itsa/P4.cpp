//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=15904
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int h1,m1,h2,m2;

	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		int fh,fm;
		fm = m2 - m1;
		if(fm <0)
		{
			fm += 60;
			h2 -= 1;
		}

		fh = h2 - h1;
		if(fh < 0)
		{
			fh += 24;
		}

		int ans = 0;
		if(fh <= 0 && fh <2)
		{
			fh *=2;
			ans = fh * 30;
			if(fm >= 30)
				ans += 30;
		}

		else if(fh >= 2 && fh <4)
		{
			ans += 120;
			fh -= 2;
			fh *=2 ;
			ans += fm *40;
			if(fm >= 30)
				ans += 40;
		}
		else if(fh >=4)
		{
			ans += 280;
			fh -= 4;
			fh *= 2;
			ans += fh * 60;
			if(fm >= 30)
				ans += 60;
		}

		cout << ans << endl; 
	}
}