# time complexity of merge is (o(n log(n)))
from heapq import merge
def mergeK(arr, k):
    l = arr[0]
    for i in range(k-1):
        l = list(merge(l, arr[i + 1]))
    return l
arr =[[2, 6, 12 ],
    [ 1, 9 ],
    [23, 34, 90, 2000]]
k = 3
l = mergeK(arr, k)
print(*l)