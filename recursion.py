def function(n):
    if n <= 1:
        return 1
    return function(n - 1) + function(n - 2)

n=int(input())
result=function(n)
print(result)
