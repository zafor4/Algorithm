def merge(arr, low, mid, high):
    size_left = mid - low + 1
    size_right = high - mid
    leftArr = [0] * size_left
    rightArr = [0] * size_right
    
    for i in range(0, size_left):
        leftArr[i] = arr[low + i]
        
    for j in range(0, size_right):
        rightArr[j] = arr[mid + 1 + j]
        
    i = 0
    j = 0
    k = low
    
    while i < size_left and j < size_right:
        if leftArr[i] <= rightArr[j]:
            arr[k] = leftArr[i]
            i += 1
        else:
            arr[k] = rightArr[j]
            j += 1
        k += 1
        
    while i < size_left:
        arr[k] = leftArr[i]
        i += 1
        k += 1
        
    while j < size_right:
        arr[k] = rightArr[j]
        j += 1
        k += 1

def merge_sort(arr, low, high):
    if low < high:
        mid = low + (high - low) // 2
        merge_sort(arr, low, mid)
        merge_sort(arr, mid + 1, high)
        merge(arr, low, mid, high)
