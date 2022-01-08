M = [[0, 1, 1, 0, 1],
    [1, 1, 0, 1, 0],
    [0, 1, 1, 1, 0],
    [1, 1, 1, 1, 0],
    [1, 1, 1, 1, 1],
    [0, 0, 0, 0, 0]]
r = len(M) # no. of rows in M[][]
c= len(M[0]) # no. of columns in M[][]    
ans=0
dp=[[0]*(c+1) for i in range(r+1)]
for i in range(1,r+1):
    for j in range(1,c+1):
        if M[i-1][j-1]==1:
            dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])
            if ans<=dp[i][j]:
                ans=dp[i][j]
print(ans*ans)                