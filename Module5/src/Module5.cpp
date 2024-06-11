//============================================================================
// Name        : Module5.cpp
// Author      : k
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include<String>
#include<fstream>
#include <algorithm>
using namespace std;
int main()
{
    ofstream ofile;
    ifstream ifile;
      string str="xyz";
    ofile.open ("C:/Users/Keila/Desktop/CSC450_CT5_mod5.txt",ios_base::app);

      while(str!="x")
      {
          cout<<"\nEnter string: (x to exit)";
          cin>>str;
          if(str!="x")
          {
              ofile<<str;
          }
    }
    ofile.close();


    ifile.open("C:/Users/Keila/Desktop/CSC450_CT5_mod5.txt");
    ofile.open("C:/Users/Keila/Desktop/CSC450_mod5-2.txt");

    cout<<"\n\nFile Data ( CSC450_CT5_mod5.txt ):\n\n";
    while(ifile>>str)
    {
        cout<<str;
        ofile<<str;
    }

    ifile.close();
    ofile.close();

    ifile.open("C:/Users/Keila/Desktop/CSC450_mod5-2.txt");
    ofile.open("C:/Users/Keila/Desktop/CSC450-mod5-reverse.txt");

    while(ifile>>str)
    {
        reverse(str.begin(),str.end());
        ofile<<str;
    }
    ifile.close();
    ofile.close();
    ifile.open("C:/Users/Keila/Desktop/CSC450-mod5-reverse.txt");
    cout<<"\n\nFile Data After Reverse( CSC450-mod5-reverse.txt ):\n\n";
    while(ifile>>str)
    {
        cout<<str;
    }

    return 0;
}
