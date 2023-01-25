#include "stdafx.h"
#include <iostream>
using namespace std;
void obratno(int n)
{
	if(n < 10)
		cout << n;
	else
	{
		cout << n%10;
		obratno(n/10);
	}
} 
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "n: ";
	cin >> n;
	obratno(n);
	cout << endl;
	return 0;
}

