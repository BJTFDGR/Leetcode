
// 双指针
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int length = nums.size(), index = 0;
		while ( index < length )
		{
			 if ( nums[index] == val )
			 {
				 nums[index] = nums[length - 1];
				 -- length;
			 }
				
			else ++index;
		}
		 return length;  
	}
};

//快慢指针
public int removeElement(int[] nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.length; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
