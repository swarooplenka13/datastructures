n,c=map(int,input().split())
l=[]
for _ in range(n):
    x=int(input())
    l.append(x)
l.sort()
lb,ub,ans=0,1e9,0
while lb<=ub:
    mid=(lb+ub)//2
    cow=1
    prev=l[0]
    for i in range(1,n):
        if l[i]-prev>=mid:
            cow+=1
            prev=l[i]
            if c==cow :
                break
    if cow==c:
        ans=mid
        lb=mid+1
    else:
        ub=mid-1
print(ans)        
    