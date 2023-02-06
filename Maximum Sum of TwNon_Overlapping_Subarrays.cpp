class Solution {
public:
int solve(vector<int>& nums, int p, int q)
{
    int k=p;
    int sum1=0;
    int maxi=0,total=0;
    int i=0,j=0;
    while(j<nums.size())
    {
         sum1+=nums[j];
         if(j-i+1<k)
        {
            
            j++;
        }
        else
        {
            // cout<<j<<" ";
            int smax=0;
            int sum2=0;
            int x=j+1,y=j+1;
            while(y<nums.size())
            {
                sum2+=nums[y];
                if(y-x+1<q)
                {
                    y++;
                }
                else
                {
                    smax=max(smax,sum2);
                    sum2-=nums[x];
                    x++;
                    y++;
                }
            }
            // if(j==0)
            maxi=max(maxi,smax+sum1);
            sum1-=nums[i];
            i++;
            j++;
        }
    }
    return maxi;
}
    int maxSumTwoNoOverlap(vector<int>& nums, int p, int q) {
        int ans=solve(nums,p,q);
        int sol=solve(nums,q,p);
        return max(sol,ans);
    }
};
