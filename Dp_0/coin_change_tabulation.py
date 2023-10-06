def fun2(coins, target):
    table = []
    for i in range(len(coins)):
        temp = [0] * (target + 1)
        table.append(temp)

    for i in range(1, target + 1):
        if (i % coins[0] == 0):
            table[0][i] = i
        else:
            table[0][i] = 1e6

    for c in range(1, len(coins)):
        for t in range(1, target + 1):
            take = 1e6

            if coins[c] <= t:
                take = 1 + table[c][t - coins[c]]
            not_take = table[c - 1][t]

            table[c][t] = min(take, not_take)
    return table[len(coins) - 1][target]

Coins = [1, 5, 6, 9]
Target = 11
print(fun2(Coins, Target))
