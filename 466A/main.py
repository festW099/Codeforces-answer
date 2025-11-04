n, m, a, b = map(int, input().split())

full = n // m
rest = n % m

cost = full * b + min(rest * a, b)
cost = min(cost, n * a)

print(cost)
