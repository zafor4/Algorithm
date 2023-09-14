def nextFit(weight,capacity):
    res=0
    rem=capacity
    for i in range (len(weight)):
        if rem>=weight[i]:
            rem=rem-weight[i]
        else:
            res+=1
            rem=capacity-weight[i]
    return res
weight=[2,5,4,7,1,3,8]
c=10

print(nextFit(weight,c))