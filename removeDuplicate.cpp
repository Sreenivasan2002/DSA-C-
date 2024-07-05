#include <iostream>
int main()
{
    int arr[] = {4, 2, 1, 3, 1};
    int ans = 0;
    // Finding the XOR of all elements in the array
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    // Finding the XOR of numbers from 1 to n-1
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }
    // The result 'ans' will be the duplicate element
    std::cout << ans;
    return ans;
}
