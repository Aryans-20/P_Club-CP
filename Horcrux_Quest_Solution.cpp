#include<bits/stdc++.h>
using namespace std;
//solve_dp function solves for the maximum number of galleons when you begin on kth node
int solve_dp(int *dp,vector<int> &cave,int k,int *log,int depth)
{
    if(cave[k]==(-1))
    {dp[k]=0; return 0; }
    else if(log[k+1]==depth)
    {dp[k]=cave[k] ;return cave[k];}
    else if(dp[k]!=(-1))
    {return dp[k];}
    else
    {
        dp[k]=max(solve_dp(dp,cave,2*k+1,log,depth),solve_dp(dp,cave,2*k+2,log,depth))+cave[k];
        return dp[k];
    }
}
int main()
{
    int n,j,m,i,temp;
    cin>>n>>m;
    m=(1<<m);
    vector<int> cave;
    int dp[m-1];                // To store answers for each node
    for(j=0;j<(m-1);j++)
    dp[j]=-1;
    int log1[m];                // So that we do not waste time calculating log for each query
    log1[1]=0;
    for(j=2;j<m;j++)
    log1[j]=log1[j/2]+1;
    for(j=0;j<(m-1);j++)
    {
        cin>>temp;
        cave.push_back(temp);
    }
    for(j=0;j<(m-1);j++)
    solve_dp(dp,cave,j,log1,log1[m-1]);
    // Writing the sparse table
    int table[m-1][log1[m-1]+1];
    for(i=0;i<(m-1);i++)
    table[i][0]=dp[i];
    for(j=1;j<=log1[m-1];j++)
    {
        for(i=0;i<(m-(1<<j));i++)
        table[i][j]=max(table[i][j-1],table[i+(1<<(j-1))][j-1]);
    }
    // Start Answering Queries Now
    int l,r;
    for(j=0;j<n;j++)
    {
        cin>>l>>r;
        cout<<max(table[l][log1[r-l+1]],table[r+1-(1<<log1[r-l+1])][log1[r-l+1]]);
        cout<<"\n";
    } 
    return 0;
}