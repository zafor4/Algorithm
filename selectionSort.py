def selectio_sort(a):
    for i in range(0,len(a)-1):
        index_min=i
        for j in range (i+1,len(a)):
            if(a[j]<a[index_min]):
                index_min=j
        if (index_min!=i):
            temp=a[i]
            a[i]=a[index_min]
            a[index_min]=temp

    print(a)
a=[4,8,3,10,2]
selectio_sort(a)