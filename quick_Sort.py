def pertition(a,start,end):
    i=start-1
    pivot=a[end]
    for j in range(start,end):
        if(a[j]<=pivot):
            i=i+1
            a[i],a[j]=a[j],a[i]