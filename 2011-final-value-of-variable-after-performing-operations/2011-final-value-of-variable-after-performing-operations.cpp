class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int temp = 0;
        for(int i=0; i<n; i++){
            if(operations[i][1] == '+') temp++; else temp--;
        }
        return temp;
    }
};