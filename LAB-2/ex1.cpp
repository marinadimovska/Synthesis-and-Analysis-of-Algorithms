#include <iostream>
#define N 5
int main() {
    int max,i, k,n, numbers = 0, arr[N], avg=0;
    float sum = 0;
    
    std::cin>>n;
    for(i=0; i<N; i++)
    {
        std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];

        numbers++;
    }
    max = arr[0];
    for(i=0; i<N; i++){
        sum = sum + arr[i];
        if(arr[i]%2 != 0 && arr[i]>0)
        {
            k++;
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
        
        
    }
    
    avg = sum / numbers;
    
    std::cout << "max = " << max << "\n";
	std::cout << "k = " << k << "\n";
	std::cout << "avg = " << sum/numbers << "\n";

    return 0;
}
