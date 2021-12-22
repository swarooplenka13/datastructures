n=100
r=25
dp=[]
for i in range(n+1):
    dp.append([0 for i in range(r+1)])
for i in range(n+1):
    for j in range(min(i,r)+1):
        if i==j or j==0:
            dp[i][j]=1
        else:
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j]  
# print(*l,sep='\n')
print(dp[n][r])