def PK(price, weight, cap):

    items = [(p/w, p, w) for p, w in zip(price, weight)]

    items.sort(key=lambda x: x[0], reverse=True)

    total_profit = 0

    for item in items:
        u = item[0]  
        p = item[1]  
        w = item[2]  

        if w <= cap:
            total_profit += p
            cap -= w
        else:
            total_profit += cap * u
            cap = 0
            break

    return total_profit

price = list(map(float, input().strip().split()))

weight = list(map(float, input().strip().split()))

capacity = int(input())

profit = PK(price, weight, capacity)
print(profit)
