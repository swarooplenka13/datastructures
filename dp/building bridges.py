def ceilidx(dp,l,r,key):
    while r>l:
        mid=(l+r)//2
        if dp[mid]>=key:
            r=mid
        else:
            l=mid+1
    return r    
l=[]
#pair of north south bridges
l.append([8,1])
l.append([1,2])
l.append([4,3])
l.append([3,4])
l.append([5,5])
l.append([2,6])
l.append([6,7])
l.append([7,8])
l.sort()
a=[]
for i in range(len(l)):
    a.append(l[i][1])
print(a)    
dp=[0]*len(l)
ans,le=0,1
dp[0]=a[0]
for i in range(0,len(l)):
     c=ceilidx(dp,0,le-1,a[i])
    #  print(c)
     if a[i]>dp[i-1]:
         dp[le]=a[i]
         le+=1
     dp[c]=a[i]    
     ans=max(ans,c+1)    
print(ans)        
