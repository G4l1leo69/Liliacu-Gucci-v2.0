#include <iostream>

using namespace std;

int main()
{
    int P1=20, Bss=50, d1=9, d2=4, f, d;
    cout<<"Hello there adventurer!"<<endl;
    cout<<"Come to a brave battle with the Boss of the bad!"<<endl;
    cout<<"Please, choose your player:"<<endl;
    cout<<"Stanford[power-iq](type 1)"<<endl;
    cout<<"Rambo[power-strenght](type 2)"<<endl;
    cin>>f;
    while(Bss>0)
    {
    cout<<"You (1=attack; 0=defence)"<<endl;
    cin>>d;
    if(d==1)
        Bss=Bss-d1;
    if(Bss==0)
    {
        cout<<"You won!"<<endl;
        return 1;
    }
    cout<<"Boss HP: "<<Bss<<endl;
    cout<<"The boss attacks!"<<endl;
    if(d==1)
    {
        P1=P1-d2;
    }
    if(d==0)
    {
        cout<<"You deflected the attack, by defence"<<endl;
        Bss--;
        cout<<"Boss HP: "<<Bss<<endl;
    }
    cout<<"Your HP: "<<P1<<endl;
    if(Bss==0)
    {
        cout<<"You won!"<<endl;
    }
    if(P1==0)
    {
    cout<<"You lost"<<endl;
    }
    if(Bss==0 || P1==0)
    {
        cout<<"End of Game"<<endl;
        cout<<"Thanks for playing"<<endl;
        cout<<"Shutting down"<<endl;
        cout<<"1%"<<endl;
        cout<<"12%"<<endl;
        cout<<"19%"<<endl;
        cout<<"28%"<<endl;
        cout<<"31%"<<endl;
        cout<<"40%"<<endl;
        cout<<"46%"<<endl;
        cout<<"52%"<<endl;
        cout<<"59%"<<endl;
        cout<<"66%"<<endl;
        cout<<"69%"<<endl;
        cout<<"74%"<<endl;
        cout<<"80%"<<endl;
        cout<<"84%"<<endl;
        cout<<"91%"<<endl;
        cout<<"99%"<<endl;
        cout<<"100%"<<endl;
        return 0;
    }
    }

}
