def maxSubarray(arr, n, m):
	maxim,prefix = 0,0
	S = set()
	S.add(0)	
	for i in range(n):
		prefix = (prefix + arr[i]) % m
		maxim = max(maxim, prefix)
		it = 0
		for i in S:
			if i >= prefix + 1:
				it = i
		if (it != 0):
				maxim = max(maxim, prefix - it + m )
		S.add(prefix)
	return maxim
arr = [3, 3, 9, 9, 5]
n = 5
m = 7
print(maxSubarray(arr, n, m))

"""
    Store all prefixes.
    For current prefix, prefixi, find the smallest value greater than or equal to prefixi + 1.
     
    maxSumi = (prefixi - prefixj + m) % m 
    """