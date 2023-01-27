#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	
	x = 2;
	do
	{
		x = 2*x + 10;
	}
	while(x<100);
	cout << "x = " << x << "\n";
	
	return 0;
}
