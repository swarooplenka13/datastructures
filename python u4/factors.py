maX=1000000
factor=[0]*(maX+1)
def generateprime():
        factor[1]=1
        for i in range(2,maX):
            factor[i]=i
        for i in range(4,maX,2):
            factor[i]=2
        i=3
        while i*i<maX:
            if factor[i]==i:
                j=i*i
                while(j<maX):
                    if factor[j]==j:
                     factor[j]=i
                    j+=i
            i+=1
def find(a):
    if a==1:
        return 1
    m={}
    ans=1
    c=factor[a]
    m[c]=1
    ct=1
    j=int(a//factor[a])
    while j>1:
        if factor[j]==c:
            ct+=1
        else:
            c=factor[j]
            ans*=(ct+1)
            ct=1
        j=j//factor[j]   
        if c not in m:
            m[c]=1
        else:
            m[c]+=1
    return ans*(ct+1),m
generateprime()    
x,y=find(999999) 
print("timecomplexity:o(logn)")
print("no of factors:"+str(x)) 
sm=1
for i in y:
    sm*=(pow(i,y[i]+1)-1)//(i-1)
print("sum of factors:"+str(sm))    
            
	    
	    
	            