def insertion_Sort(a):
    for i in range(1,len(a)):
        item=a[i]
        j=i-1
        while(j>=0 and a[j]>item):
            a[j+1]=a[j]
            j=j-1
        a[j+1]=item
    print(a)
a=[5,4,3,2,1]
insertion_Sort(a)