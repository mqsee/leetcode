#include<iostream>
#include "solution.h"
#include<vector>
using namespace std;

int main()
{
  Solution s;
  vector<int> v;
  v.push_back(3);
  v.push_back(2);
  v.push_back(4);

  vector<int> res;
  res = s.twoSum(v,6);
  cout<<res[0]<<" "<<res[1]<<endl;
  cout<<v[res[0]]<<" "<<v[res[1]]<<endl;
  return 0;
}
