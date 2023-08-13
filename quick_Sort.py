def pertition(a,start,end):
    i=start-1
    pivot=a[end]
    for j in range(start,end):
        if(a[j]<=pivot):
            i=i+1
            a[i],a[j]=a[j],a[i]
    a[i+1],a[end]=a[end],a[i+1]
    return i+1
def quick(a,start,end):
    p=pertition(a,start,end)
    if (start < end):
        quick(a,start,p-1)
        quick(a,p+1,end)

a=[10,80,30,90,20,70,95,40]
start=0
end=len(a)-1
quick(a,start,end)
print(a)