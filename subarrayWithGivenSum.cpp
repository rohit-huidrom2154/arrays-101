// time,space: O(n)

#include <iostream>
#include <unordered_set>
using namespace std;

bool isSum(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        if (s.find(preSum - sum) != s.end())
            return true;
        if (preSum == sum)
            return true;
        s.insert(preSum);
    }
    return false;
}

int main()
{
    system("cls");

    int arr[] = {5, 8, 6, 13, 3, -1};
    int n = sizeof(arr) / sizeof(int);
    int sum = 22;
    cout << isSum(arr, n, sum);

    return 0;
}