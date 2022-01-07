a=[1,3,2,1]  #no 2 adjacent
dp=[0]*(len(a)+1)
dp[0],dp[1]=0,a[0]
for i in range(1,len(a)):
    dp[i+1]=max(dp[i],dp[i-1]+a[i])
print(dp[len(a)])
