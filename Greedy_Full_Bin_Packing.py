def subsetsUtil(A, subset, index, subset_sums):
    subset_sum = sum(subset)
    subset_sums.append(subset_sum)
    
    for i in range(index, len(A)):
        subset.append(A[i])
        subsetsUtil(A, subset, i + 1, subset_sums)
        subset.pop(-1)

def subsets_with_sums(A):
    subset_sums = []
    subset = []
    index = 0
    subsetsUtil(A, subset, index, subset_sums)
    return subset_sums

array = [2,2,3,3,3,3,4,4,4,6,7,7]
subset_sums = subsets_with_sums(array)
# print(subset_sums)
count=0
total=0
ts=12
for sums in subset_sums:
    if total==48:
        exit(0)
    if sums==ts:
        count+=1
        total+=sums
    else :
        ts-=1
print(count)            
