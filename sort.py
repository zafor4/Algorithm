def selectionsort(arr):
    for i in range (0,len(arr)-1):
        index_min=i
        for j in range (i+1,len(arr)):
            if (arr[j]<arr[index_min]):
                index_min=j
        if(index_min!=i):
            arr[index_min],arr[i]=arr[i],arr[index_min]

arr=list(map(int,input().strip().split()))
selectionsort(arr)
print(arr)