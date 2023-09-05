#include <iostream>
using namespace std;


    int *add(int x, int y)
    {
	int r = x+y;
	return &r;
    }

int main( )
    {
    int x = 10;
    int y = 20;
    int *z = add(x,y);

    cout<<**z;
    }

//cout<<"Hello bro !"<<endl;

