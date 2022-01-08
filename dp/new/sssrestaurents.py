def fun(d,p,k):
    n=len(d)
    dp=[0]*(n+1)
    for i in range(1,n):
        q=dp[i-1]
        for j in range(i+1):
            if d[j]<d[i]-k:
                q=max(q,p[i]+dp[j])
        dp[i]=q 
    return dp[n]           

d=[1,2,4,5,6,6]
pr=[0,10,20,40,80,100]
print(fun(d,pr,2))
