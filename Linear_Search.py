def linear_search(a,n):
    for i in range (0,len(a)):
        if (a[i]==n):
            return i
    return -1
a=[1,2,3,4,5,6]
n=4
if (linear_search(a,n)==-1):
    print("Not found")
else :
    print("Found at index",str(linear_search(a,n)))


