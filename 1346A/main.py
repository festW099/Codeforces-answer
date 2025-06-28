t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    x = n / (1 + k + k ** 2 + k ** 3)
    print(f"{int(x)} {int(x * k)} {int(x * k ** 2)} {int(x * k ** 3)}")