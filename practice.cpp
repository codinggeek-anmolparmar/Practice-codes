f(ind,W)
{
  if(ind==0)
  {
    if(wt[0]>=W)
    {
      return val[0];
    }
    else{
      return 0;
    }
  }
  int nonpick=0+f(ind-1,W);
  int pick=INT_MIN;
  if(wt[ind]>=W)
  {
    int pick=wt[ind]+f(ind-1,W-wt[ind]);

  }
  return max(pick,nonpick);
}
int main()
{
  vector<vector<int>> dp(n,vector<int>(W+1,-1));
  int ans=f(ind,W);
  return ans;
}
