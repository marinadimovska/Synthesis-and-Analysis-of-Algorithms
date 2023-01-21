#include <iostream>
#define N 6

int main()
{
    int arr[N], i, k;
    for(i=0; i<N; i++)
    {
        std::cin>>arr[i];
    }
    for(i=0; i<N; i++)
    {    if((arr[i] < 0 && arr[i+1] > 0) || (arr[i] > 0 && arr[i+1] < 0)) 
			k++;
    }
    
    	std::cout << k << "\n";
    	return 0;
}
