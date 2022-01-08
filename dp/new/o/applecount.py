def cntMaxApples(apples, days) :
    pq = [] #minheap
    i = 0
    n = len(apples)
    total_apples = 0
    while (i < n or len(pq) > 0) :
      if (i < n and apples[i] != 0) :
        pq.append([i + days[i] - 1, apples[i]])
        pq.sort()
    #   print(pq)  
      while (len(pq) > 0 and pq[0][0] < i) :
        pq.pop(0)
      if (len(pq) > 0) :
        curr = pq[0]
        pq.pop(0)
        if (len(curr) > 1) :
          pq.append([curr[0], curr[1]-1])
          pq.sort()
        total_apples+=1
      i+=1    
    return total_apples
apples = [ 1, 2, 3, 5, 2 ]
days = [ 3, 2, 1, 4, 2 ]
print(cntMaxApples(apples, days))