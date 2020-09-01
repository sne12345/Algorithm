#include <iostream>
#include <algorithm>
 
int arr[1000001];
int main()
{
    int n, i;
    std::cin >> n;
    for (i = 0;i<n;i++) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr+n);
    for (i = 0;i < n;i++) {
        std::cout << arr[i] << "\n";
    }
}
 
