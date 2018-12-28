#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>


using namespace std;

int main()
{
    #ifdef DEBUG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif 

    int n,p;
    int time=1;
    while(~scanf("%d %d",&n,&p))
    {
        if(n==0&&p==0)
            break;
        string project;

        getchar();//讀一個換行
        for(int i=0;i<n;i++)
            getline(cin,project);
        
        string company;
        float prise;
        int tick;
        string ignore;
        string ans_com;
        int ti_max=0,pr_max=0;


        for(int i=0;i<p;i++)
        {
            getline(cin,company);
            cin>>prise;
            cin>>tick;
            getchar();
            for(int j=0;j<tick;j++)
                getline(cin,ignore);


            if(ti_max<tick)
            {
                ti_max=tick;
                ans_com=company;
                pr_max=prise;
            }

            else if(ti_max==tick)
            {
                if(prise<pr_max)
                {
                    ans_com=company;
                    pr_max=prise;
                }

            }
        }

        if(time>1)
            cout<<endl;
        cout <<"RFP #"<< time<<endl;
        time++;
        cout << ans_com<<endl;
        
    }

    return 0;
}