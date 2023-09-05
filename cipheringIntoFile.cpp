#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    fstream myfile;
    myfile.open("encodedDB.txt", ios::out);
    if(myfile.is_open())
    {   for(int i=0; i<s.length(); i++)
        {
            char x = s.at(i);
            myfile<< int(x);
        }
        myfile.close();
    }

    myfile.open("encodedDB.txt", ios::in);
    if(myfile.is_open())
    {
        string line;
        while(getline(myfile, line))
        {
            int num = 0;
            for(int i=0; i<line.length(); i++)
            {
                num = num*10 + (line[i] - '0');
                if(num >= 32 && num <= 122)
                {
                    char y = (char)num;
                    cout<<y;
                    num = 0;
                }

            }
        }
    }
    myfile.close();

    return 0;
}
