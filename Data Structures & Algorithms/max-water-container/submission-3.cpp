class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_amt=0;
        int left=0;
        int right=heights.size()-1;

        while (left<right){
            int width=right-left;
            int height=min(heights[left],heights[right]);

            int current_water=width*height;
            max_amt=max(current_water,max_amt);

            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }

    return max_amt;
        
    }
};
