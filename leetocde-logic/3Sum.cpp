#include <bits/stdc++.h>
using namespace std;
class ssum{
    public:
    int inp(int[] nums){
        vector<vector<int>> ans;
        //firstly sort element to reduce duplicate and to apply the 2 pointer appoarach
        sort(nums.begin(),nums.end());
        //2 pointer
        int j,k;
        //take one element fixed and for rest apply the 2 pointer appoarch 
        for(int i=0;i<nums.size()-2;i++){  //loop for taking the ith element fixed
            if(i>0&&nums[i]==nums[i-1])continue;  //for not taking the duplicate and avoid duplicate triplet
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                  int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // Skip duplicates for j
                    while(j < k && nums[j] == nums[j+1]) j++;

                    // Skip duplicates for k
                    while(j < k && nums[k] == nums[k-1]) k--;

                    j++;
                    k--;
                }
                else if(sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
            }


        }
     }
    }
