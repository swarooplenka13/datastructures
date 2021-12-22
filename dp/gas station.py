gas=[1,2,3,4,5]
cost=[3,4,5,1,2]
tank,shortage,start=0,0,0
for i in range(len(gas)):
    tank+=gas[i]
    if tank>=cost[i]:
        tank-=cost[i]
    else:
        shortage+=cost[i]-tank
        start=i+1
        tank=0
if start==len(gas) or tank<shortage:
    print(-1) 
else:
    print(start)                  

 # if tank>=shortage then only solution exists   