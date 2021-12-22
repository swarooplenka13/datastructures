a=[3,4,2,1,2,1]
intmax=32767
dp=[intmax]*len(a)
dp[0]=0
for i in range(1,len(a)):
    for j in range(i):
        if i<=j+a[j] and dp[j]!=intmax:
            dp[i]=min(dp[i],dp[j]+1)
print(dp[len(a)-1])        