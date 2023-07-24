def binary_search(a,n):
    low=0
    high=len(a)-1
    while(low<=high):
        mid=(low+high)//2
        if(a[mid]==n):
            return mid
        elif (a[mid]<n):
            low=mid+1
        else :
            high=mid-1
    return -1
a=[1,2,3,4,5,6,7,8]
n=6
if (binary_search(a,n)==-1):
    print("Not found")
else :
    print("Found in index",str(binary_search(a,n)))