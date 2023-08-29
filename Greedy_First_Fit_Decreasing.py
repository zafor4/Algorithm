
def firstFit(weight, n, c):
	

	res = 0

	bin_rem = [0]*n

	for i in range(n):

		j = 0
		while( j < res):
			if (bin_rem[j] >= weight[i]):
				bin_rem[j] = bin_rem[j] - weight[i]
				break
			j+=1

		if (j == res):
			bin_rem[res] = c - weight[i]
			res= res+1
	return res

def firstFitDec(weight, n, c):

	weight.sort(reverse = True)

	return firstFit(weight, n, c)

weight = [ 2, 5, 4, 7, 1, 3, 8 ]
c = 10
n = len(weight)
print("Number of bins required in First Fit Decreasing : ",str(firstFitDec(weight, n, c)))
