INT_MIN = -32767
def cutRod(a, n):
    dp = [0 for x in range(n+1)]
    dp[0] = 0
    for i in range(1, n+1):
        max_val = INT_MIN
        for j in range(i):
             max_val = max(max_val,a[j]+dp[i-j-1])
        dp[i] = max_val
    return dp[n]
arr = [1, 5, 8, 9, 10, 17, 17, 20]
size = len(arr)
print("Maximum Obtainable Value is " + str(cutRod(arr, size)))
 