def coinchanging(coins,amount):
    res=0
    while (amount!=0):
        for i in range (0,len(coins)):
            if(amount>=coins[i]):
                res=res+(amount//coins[i])
                amount=amount%coins[i]
    return res

coins=[20,10,5,2]
amount=57
val=(coinchanging(coins,amount))
print(val)

