#include <iostream>

int main()
{
    int nums[] = {2,7,11,15};                   //Given array
    int n = sizeof(nums) / sizeof(nums[0]);     //Size of Array
    int target = 9;                             //Given target number

    //Check double loop for every pair
    for (int i = 0; i < n; i++)
    {
        //Make j + 1 to avoid redundancy of i
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                //End after finding index
                std::cout << "["<< i << ", "<< j <<"]\n";
                return 0;
            }
        }
    }

    return 0;
}


