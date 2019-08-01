#  two sum 解题思路
## 1.BF
直接用BF(Brute Force)暴力求解就是通过两层循环嵌套完成,时间复杂度O(n^2),本题虽然可以
通过，但不是一个好的方法，贴出代码如下:
```
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        bool flag = false;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    flag = true;
                    break;
                }
            }
            if(flag)break;
            
        }
        return result;
    }
};
```
## 2.hash table
采用以时间换空间的方法，把数组存到一个map里面,map的key为数组的值，map的value为数组的下标
这样只需要遍历原数组，查看a=target - nums[i]的值在不在map的下标中，如果存在并且map[i]与  
i不相等，则这两个值就是需要返回的下标
时间复杂度O(n),空间复杂度O(n)
```
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int, int> Myset;
        vector<int> results;
        
        for(auto tmp = nums.begin(); tmp < nums.end(); tmp++){
            Myset[*tmp] = tmp - nums.begin();
        }
        
        for(auto tmp = nums.begin(); tmp < nums.end(); tmp++){
            if( Myset.find(target - *tmp)!= Myset.end()   && (*Myset.find(target - *tmp)).second !=(tmp - nums.begin())){
                results.push_back(tmp - nums.begin());
                results.push_back(Myset[target - *tmp]);
                break;
            }
        }
        
        return results;
        
        
        
    }
    
    
    
};
```
## 新增的一行内容
## 在云端添加新的一行 需要同步到本地
### 这是A分支新增的一行

这是master分支新增的一行 解决冲突




