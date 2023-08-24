def partition(arr,low,high):
    pivot=arr[high]
    i=low-1
    for j in range(low,high):
        if arr[j]<=pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]

    return i+1

def quicksort(arr,low,high):
    if low>=high:
        return 
    x=partition(arr,low,high)
    quicksort(arr,low,x-1)
    quicksort(arr,x+1,high)

def printMaxActivities(s,f):
    n=len(f)
    i=0
    print(i,end=' ')

    for j in range(1,n):
        if (start[j]>=end[i]):
            print(j, end=' ')
            i=j

start=[10,12,20]
end=[20,25,30]
quicksort(end,0,len(end)-1)
printMaxActivities(start,end)
