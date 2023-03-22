#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter 4-digit number: ";
    cin>>choice;

    cout<<choice/1000<<endl;
    choice=choice%1000;
    cout<<choice/100<<endl;
    choice=choice%100;
    cout<<choice/10<<endl;
    choice=choice%10;
    cout<<choice;

    return 0;
}
