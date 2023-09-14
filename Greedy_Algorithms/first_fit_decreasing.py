def sorting(arr,n):
    for i in range(0,n):
        for j in range (0,n-i-1):
            if arr[j]<arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]


def firstfit_decreasing(weight,n,c):
    res=0

    bin_rem=[0]*n
    for i in range (n):
        j=0
        while(j<res):
            if (bin_rem[j]>=weight[i]):
                bin_rem[j]=bin_rem[j]-weight[i]
                break
            j+=1

        if (j==res):
            bin_rem[res]=c-weight[i]
            res=res+1
    return res
weight=[2,5,4,7,1,3,8]
c=10
n=len(weight)
sorting(weight,n)
print(weight)
print(firstfit_decreasing(weight,n,c))
            
            