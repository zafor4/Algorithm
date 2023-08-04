def binary_search(arr, key,result):
    left=0 
    right =len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == key:
            result = mid
            left = mid + 1 
        elif arr[mid] < key:
            left = mid + 1
        else:
            right = mid - 1

    return result
arr=list(map(int, input("elements of array: ").strip().split()))
key=int(input())
result=-1
last_occurrence = binary_search(arr, key,result)
if (last_occurrence==-1):
    print("Item Not Found")
else:    
    print("Last Occurrence = ", last_occurrence)
