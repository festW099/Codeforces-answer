n, m = map(int, input().split())
sp = list(map(int, input().split()))

time = 0

sp.reverse()
sp.append(1)
sp.reverse()

for i in range(m):
    if sp[i] < sp[i + 1]:
        time += sp[i + 1] - sp[i]
    elif sp[i] > sp[i + 1]:
        time += n - sp[i] + sp[i + 1]
    else:
        pass

print(time)