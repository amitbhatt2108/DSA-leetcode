class Solution {
public:

    // int fact(int n) {
        // int f = 1;
        // for(int i = 1; i <= n; i++) {
            // f = f * i;
        // }
        // return f;
    // }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;
        //ise ham ise triangle form mai la rhe hai 
        for(int i = 0; i < numRows; i++) {
            ans.push_back(vector<int>(i + 1, 1));
        }
        //ise ham triangle mai elements put kr rhe hai
        for(int i = 2; i < ans.size(); i++) {

            for(int j = 1; j < ans[i].size()-1; j++) {

                //ans[i][j] = fact(i) / (fact(j) * fact(i-j));
             ans[i][j] = ans[i-1][j-1] + ans[i-1][j] ; 
            }
        }

        return ans;
    }
};