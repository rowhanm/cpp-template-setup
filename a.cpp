#include <bits/stdc++.h>
#include <string>

typedef long long ll;

int main() {
    int n;
    scanf("%d \n", &n);
    std::deque<int> nums;
    int num;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&num);
        nums.push_back(num);
    }
    int sums[2] = {0, 0};
    for (size_t i = 0; i < n; i++)
    {
        if (nums[0] >= nums[nums.size() - 1]) {
            sums[i%2] += nums[0];
            nums.pop_front();
        } else {
            sums[i % 2] += nums[nums.size() - 1];
            nums.pop_back();
        }
    }
    printf("%d %d\n", sums[0], sums[1]);
    

    

}