#https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/

def findminimum_No_of_coin(arr,amount,n):
    result =0
    while(amount>0):
        for i in range(0,n):
            if(amount>=arr[i]):
                result=result+(amount//arr[i])
                amount=amount%arr[i]
    return result   

arr=[10000,500,200,100,50,20,10,5,2,1]
n=len(arr)
amount=int(input())
coinneeded=findminimum_No_of_coin(arr,amount,n)   
print(coinneeded)      
