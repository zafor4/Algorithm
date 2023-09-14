def min_coins(coins, amount):
    # Create a list to store the minimum number of coins for each amount
    dp = [float('inf')] * (amount + 1)
    
    # Base case: The minimum number of coins required to make 0 is 0
    dp[0] = 0
    
    # Iterate through each coin denomination
    for coin in coins:
        for i in range(coin, amount + 1):
            # Update dp[i] if a smaller number of coins is found
            dp[i] = min(dp[i], dp[i - coin] + 1)
    
    # If dp[amount] is still float('inf'), it means no combination of coins can make the amount
    if dp[amount] == float('inf'):
        return -1  # Return -1 to indicate it's not possible
    else:
        return dp[amount]

# Example usage:
coins = [1, 2, 5]  # Denominations of coins
amount = 11        # Amount to make

result = min_coins(coins, amount)
if result != -1:
    print(f"Minimum number of coins to make {amount} is {result}.")
else:
    print(f"It's not possible to make {amount} with the given denominations.")
