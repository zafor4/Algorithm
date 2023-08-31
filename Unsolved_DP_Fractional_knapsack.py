def marge(arr,low,mid,high):
    size_left=mid-low+1
    size_right=high-mid
    leftArr=[0]*size_left
    rightArr=[0]*size_right
    for i in range(0,size_left):
        leftArr[i]=arr[low+i]

    for j in range(0,size_right):
        rightArr[j]=arr[i+1+j]

    i=0
    j=0
    k=low
    while (i<size_left and j<size_right):
        
        if leftArr[i]<=rightArr[j]:
            arr[k]=leftArr[i]
            i+=1
        else:
            arr[k]=rightArr[j]
            j+=1

        k+=1

    while (i<size_left):
        arr[k]=leftArr[i]
        i+=1
        k+=1

    while (j<size_right):
        arr[k]=rightArr[j]
        j+=1
        k+=1   

def margesort(arr,low,high):
    if (low<high):
        mid=low +(high-low)//2
        margesort(arr,low,mid)
        margesort(arr,mid+1,high)
        marge(arr,low,mid,high)                     




def fractional_Knapsack(weight,price,capacity):
    n=len(weight)
    priceInUnit=[0]*n
    for i in range(n):
        priceInUnit[i]=price[i]/weight[i]    
    margesort(priceInUnit,0,n-1)
    priceInUnit.reverse()
    j=0
    totalamount=0
    while(capacity>=0):
        if (j>=n):
            break 
        if (weight[i]<=capacity):
            totalamount+=weight[i]*priceInUnit[i]
            capacity=capacity-weight[i]
            i+=1
        else :
            totalamount=capacity*priceInUnit[i]
            capacity=0      
        
    print(totalamount)



weight=[6,7,3]
price=[110,120,2] 
capacity=10
fractional_Knapsack(weight,price,capacity)   
