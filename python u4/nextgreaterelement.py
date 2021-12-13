l=[5,15,10,8,6,12,9,18]
n=len(l)
ans=[-1]*n
stack=[]
stack.append(l[n-1])
for i in range(n-2,-1,-1):
    while len(stack)>0 and stack[-1]<=l[i]:
        stack.pop()
    if len(stack)!=0:
        ng=stack[-1]
    ans[i]=ng
    stack.append(l[i])
print(ans)                
