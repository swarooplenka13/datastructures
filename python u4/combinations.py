def combination(List,v):
    if v==0:
        return [[]]
    l=[]
    for i in range(0,len(List)):
        s=List[i]
        rem=List[i+1:]
        j=combination(rem,v-1)
        for x in j:
            l.append([s]+x)
    return l
print(combination(['a','b','c'],2))             
