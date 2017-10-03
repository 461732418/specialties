#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <windows.h>
#include <cstdlib>
using namespace std;
//classes and structs or unions:
///NONE
//global variables:
///NONE
//functions:
///NONE

int main()
{
    ifstream fin;
    ofstream fout;
    cout<<"This is a File-To-File encrypter."<<endl;
    cout<<"This encrypter is designed to encrypt data strictly from the file in question."<<endl;
    cout<<"Please vertify your in file:";
    fflush(stdin);
    string i,o;
    cin>>i;
    fin.open(i);
    cout<<"Please vertify your out file:";
    fflush(stdin);
    cin>>o;
    int bse;
    cout<<"Please vertify your base:";
    fflush(stdin);
    cin>>bse;
    int spl;
    cout<<"Please vertify your speed(Fast1-->Slow10):";
    fflush(stdin);
    cin>>spl;
    fout.open(o,ios_base::out|ios_base::app);
    char get[100000];
    strset(get,'\0');
    int sn=1;
    Sleep(spl*500);
    system("cls");
    while(fin.getline(get,100000))
    {
        cout<<"Processing line #"<<sn<<" :scanning sentence..."<<endl;
        Sleep(spl*100);
        cout<<"Scanning complete:"<<get<<endl;
        Sleep(spl*100);
        cout<<"Encrypting line #"<<sn<<" :starting encryption..."<<endl;
        Sleep(spl*100);
        int l=strlen(get);
        for(int i=0;i<l;i++)
        {
            get[i]^=bse;
            if(get[i]=='\0')
            {
                get[i]++;
            }
        }
        Sleep(spl*100);
        cout<<"Encrypting complete:"<<get<<endl;
        Sleep(spl*100);
        cout<<"Writing to output line #"<<sn<<" :transporting..."<<endl;
        fout<<get<<endl;
        Sleep(spl*100);
        cout<<"Writing complete."<<endl;
        Sleep(spl*250);
        system("cls");
        sn++;
    }
    cout<<"Done. Exiting..."<<endl;
    Sleep(5000);
    return 0;
}
