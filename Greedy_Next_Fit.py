def nextfit(weight,c):
    res=0
    rem=c
    for i in range (len(weight)):
        if rem>=weight[i]:
            rem=rem-weight[i]
        else :
            res+=1
            rem=c-weight[i]
    return res
weight=[2,5,4,7,1,3,8]
c=10
print(nextfit(weight,c))            