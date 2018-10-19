#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std ;

int main(int argc, char const *argv[])
{
    #ifdef DEBUG
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif 

    string line;
    string keyborn="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin,line))
    {
        for(int i=0;i<line.size();i++)
        {
            //cout <<i << " [" << line[i]<<"]"<< endl;
            for(int j=0;j<48;j++)
            {
                //cout <<i<<" "<<line[i]<<endl;
                if (line[i] == ' ') 
                {
                    cout <<line[i];
                    break;
                }

                else if(line[i]==keyborn[j])
                   cout << keyborn[j-1];
            }

        }

        cout<<endl;

    }

    return 0;
}