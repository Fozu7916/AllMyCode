here i published all my codes, what i write


class Solution {
public:
    int removeElement(vector<int>& nums_here, int val) {
        for (int i = 0; i < nums_here.size();  i++)
        {
            if (val == nums_here[i])
            {
                nums_here.erase(nums_here.begin() + i);
                i--;
            }
        }
        int k = nums_here.size();
        return k;
    }
};

