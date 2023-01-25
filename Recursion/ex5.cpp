#include "stdafx.h"
#include <iostream>
using namespace std;
#define N 5
int mas[N];
int monoton(int n) 
{
	int b; 
	if(n==1) 
		return 1;
	if(mas[n-2]>=mas[n-1]) 
		b=1; 
	else b=0;	
	return b && monoton(n-1); 
}   
int _tmain(int argc, _TCHAR* argv[])
{
	int i; 
	for (i=0;i<N;i++)
	{
		cout << "mas[" << i << "] = "; 
		cin >> mas[i];
	}
	cout<<"Redicata "; 
	if(monoton(i)) 
		cout<<"e ";
	else
		cout<<"ne e ";
	cout << "monotonno namalyvashta. " << endl; 
 	return 0;
}
