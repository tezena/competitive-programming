class Solution {
public:
  long long appendDigit(int base, int append) {
   string sBase = std::to_string(base);
   string sAppend = std::to_string(append);
   string result = sBase + sAppend;
   return stoll(result);
}
    string largestNumber(vector<int>& nums) {
    
      long long num1=0;
      long long num2=0;
      long long temp=0;
      for(int i=0;i<nums.size();i++){
          for(int j=0;j<nums.size()-1;j++){
              num1=appendDigit(nums[j],nums[j+1]);
              num2=appendDigit(nums[j+1],nums[j]);
            if(num1<num2){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }

          }
      }
      
 stringstream result;
    for(auto i =nums.begin();i!=nums.end();i++){ 
          result << *i;
    }
    string rr=result.str();
     long double num=stold(rr);
     if(num==0 )
       return "0";
    return rr;
    }
    
};
