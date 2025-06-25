n, a, b, c = map(int, input().split())

sp = [-1] * (n + 1)
sp[0] = 0 

for i in range(1, n + 1):
    if i >= a and sp[i - a] != -1:
        sp[i] = max(sp[i], sp[i - a] + 1)
    if i >= b and sp[i - b] != -1:
        sp[i] = max(sp[i], sp[i - b] + 1)
    if i >= c and sp[i - c] != -1:
        sp[i] = max(sp[i], sp[i - c] + 1)

print(sp[n])