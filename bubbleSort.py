def bubblesort(arr):
    for i in range(0,len(arr)-1):
        for j in range(0,len(arr)-i-1):
            if arr[j]>arr[j+1]:
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
arr=[5,8,9,3,6,1]
# print(len(arr))
bubblesort(arr)
print(arr)                