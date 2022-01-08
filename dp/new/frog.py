stones=[0,1,3,5,6,8,12,17]
n=len(stones)
dp = [[False]*(n) for i in range(n)]
dp[0][0]=True
ans=False
for i in range(1,n):
    if stones[i]-stones[i-1]>i:
        ans=False
        break
for i in range(1,n):
    for j in range(i-1,-1,-1):
        k=stones[i]-stones[j]
        if k>j+1:
            break 
        dp[i][k]=dp[j][k-1] or dp[j][k] or dp[j][k+1]
        if i==n-1 and dp[i][k]:
            ans=True            
print(ans)               