class Solution {
    public:
        vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
            
            vector<int> find;
            int answer1=0,answer2=0;
            for(int i=0;i<nums1.size();i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i]==nums2[j]){
                        answer1++;
                        break;
                    }
                }
            }
             
            
            for(int i=0;i<nums2.size();i++){
                for(int j=0;j<nums1.size();j++){
                    if(nums2[i]==nums1[j]){
                        answer2++;
                        break;
                    }
                }
            }
             
            find.push_back(answer1);
            find.push_back(answer2);
            return find;
        
        }
    };