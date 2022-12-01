class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> outPut=new ArrayList<Integer>();
    // sorting by insertion sorting
       for(int i=1;i<nums.length;i++){
           int currnetNum=nums[i];
           int j=i-1;
           while (j>=0 && nums[j]>currnetNum){
               nums[j+1]=nums[j];
               j--;
           }
           nums[j+1]=currnetNum;
       }

       // find target
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target)
                outPut.add(i);
        }

        return outPut;
    }
    }
