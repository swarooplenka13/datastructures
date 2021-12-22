def maxsumnoncontiguous(a):
    max_include=[0]*len(a)
    max_exclude=[0]*len(a)
    max_include[0]=a[0]
    max_exclude[0]=0
    ans=a[0]
    for i in range(1,len(a)):
        max_include[i]=max(max_exclude[i-1]+a[i],a[i])
        max_exclude[i]=max(max_include[i-1],max_exclude[i-1])
        ans=max(max_include[i],max_exclude[i])
    return ans
a=[-2,1,-3,4,-1,2,1,-5,4]
print(maxsumnoncontiguous(a))    


'''
recurrence relation
  if 
    s[i]=a[i] if i=0
    s[i]=max(s[i-1]+a[i],a[i])
'''
