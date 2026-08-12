#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 6, 4, 3};
    int target = 10;

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}