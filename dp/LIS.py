a=[3,4,2,8,10,5,1]
dp=[0]*len(a)
dp[0]=1
for i in range(1,len(dp)):
    dp[i]=1
    for j in range(i):
        if a[i]>a[j]:
            dp[i]=max(dp[i],dp[j]+1)
print(max(dp))            

'''
 o(nlogn)
def ceilidx(dp,l,r,key):
    while r>l:
        mid=(l+r)//2
        if dp[mid]>=key:
            r=mid
        else:
            l=mid+1
    return r            
 a=[3,4,2,8,10,5,1]
 dp=[0]*len(a)
 len=1
 dp[0]=a[0]
 for i in range(1,n):
     if a[i]>dp[i-1]:
         dp[len]=a[i]
         len+=1
     else:
         c=ceilidx(dp,0,len-1,a[i])
         dp[c]=a[i]
 print(len)             

'''