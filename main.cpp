#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int second,hour,minute;
    cout<<"\n please enter the seconds:";
    cin>>second;
    hour=second/3600;
    minute=second%3600/60;
    second=second%3600%60;
    cout<<"\n The game lasted for "<<hour<<" hours, "<<minute<<" minutes and "<<second<<" seconds.";
    getch();
    return 0;
}
