def findMaxSubarraySum(arr, n, sumi):
    curr_sum = arr[0]
    max_sum = 0
    start = 0; 
    for i in range(1, n):
        
        if (curr_sum <= sumi):
            max_sum = max(max_sum, curr_sum) 
        while (curr_sum + arr[i] > sumi and start < i):
            curr_sum -= arr[start] 
            start += 1
        curr_sum += arr[i] 

    if (curr_sum <= sumi):
        max_sum = max(max_sum, curr_sum) 

    return max_sum

if __name__ == '__main__':
    arr = [6, 8, 9] 
    n = len(arr) 
    sumi = 20
    print(findMaxSubarraySum(arr, n, sumi)) 