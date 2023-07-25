def linear_search(a,n):
    for i in range (0,len(a)):
        if (a[i]==n):
            return True
    return False
a=[1,2,3,4,5,6]
n=4
if (linear_search(a,n)):
    print("Not found")
else :
    print("Found")


