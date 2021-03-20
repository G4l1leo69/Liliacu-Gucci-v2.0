include <iostream>
using namespace std;
int main()
{
int df=0, Player_=20, Bad_guy=50, dmg1=10, dmg2=6, hit;
cout<<"Attack!(type 1, or defend, type 2)"<<endl;
cin>>hit;
if(hit==1)
	Bad_guy=Bad_guy-dmg1;
if(hit==0)
        df==1;
cout<<"Enemy attacks!"<<endl;
if(df==1)
	Player_=Player_;
if(df==0)
        Player_=Player_-dmg2;


return 0;
}
