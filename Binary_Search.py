def binary_search(a,n):
    low=0
    high=len(a)-1
    while(low<=high):
        mid=low+(high-low)//2
        if(a[mid]==n):
            return mid
        elif (a[mid]<n):
            low=mid+1
        else :
            high=mid-1
    return -1
a=list(map(int, input("elements of array:-").strip().split()))
nf=int(input())
if (binary_search(a,nf)==-1):
    print("Not found")
else :
    print("Found in index",str(binary_search(a,nf)))