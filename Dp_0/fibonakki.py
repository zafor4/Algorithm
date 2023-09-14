def fibonacci(n):
    F = [0] * (n + 1)

    F[0] = 0
    F[1] = 1

    for i in range(2, n + 1):
        F[i] = F[i - 1] + F[i - 2]

    return F[n]

if __name__ == "__main__":
    n = int(input("Enter the value of n: "))

    print("Required Fibonacci number is", fibonacci(n))
