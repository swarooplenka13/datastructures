stones=[0,1,2,3,4,8,9,11]
d={}
for i in range(len(stones)):
    d[stones[i]]=[]
d[stones[0]]=[1]
for i in range(len(stones)):
    s=d[stones[i]]
    # print(s)
    for step in s:
        if step!=0 and step+stones[i] in d.keys():
           d[stones[i]+step]+=[step]
           d[stones[i]+step]+=[step-1]
           d[stones[i]+step]+=[step+1]
if d[stones[len(stones)-1]]:
    print(True)
else:
    print(False)                 
