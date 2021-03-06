#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> res;
        map<int, int> mapping;

        for(int i=0;i<nums.size();i++)
        {
          mapping[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
          int searched = target - nums[i];
          if(mapping.find(searched)!=mapping.end()&&mapping[searched]!=i)
          {
            res.push_back(i);
            res.push_back(mapping[searched]);
            break;
          }
        }
        return res;
    }
};
