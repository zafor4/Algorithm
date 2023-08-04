def reverse_array(arr):
    i = 0
    j = len(arr) - 1

    while i < j:
        arr[i], arr[j] = arr[j], arr[i]
        i += 1
        j -= 1
        # temp=arr[i]
        # arr[i]=arr[j]
        # arr[j]=temp
arr = list(map(int,input().strip().split()))
reverse_array(arr)
print(arr)
