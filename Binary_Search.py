def binary_search(numbers,number_to_find):
    low=0
    high=len(numbers)-1
    while(low<=high):
        mid=low+(high-low)//2
        if(numbers[mid]==number_to_find):
            return mid
        elif (numbers[mid]<number_to_find):
            low=mid+1
        else :
            high=mid-1
    return -1
a=list(map(int, input("elements of array:-").strip().split()))
n=int(input())
if (binary_search(a,n)==-1):
    print("Not found")
else :
    print("Found in index",str(binary_search(a,n)))