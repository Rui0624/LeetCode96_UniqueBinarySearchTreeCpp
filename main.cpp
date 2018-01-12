//
//  main.cpp
//  LeetCode96_UniqueBinarySearchTree
//
//  Created by Rui on 1/11/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    int numTrees(int n) {
        if(n == 0)
            return 1;
        
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i < n + 1; i++)
        {
            for(int j = 0; j < i; j++)
            {
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }
        
        return dp[n];
    }
};
