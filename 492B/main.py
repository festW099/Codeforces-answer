n, l = map(int, input().split())
sp = list(map(int, input().split()))

sp.sort()
sp = [0] + sp + [l]

left, right = 0, l
d = 0
for _ in range(100):
    mid = (left + right) / 2
    possible = True

    for i in range(1, len(sp)):
        if sp[i] - sp[i - 1] > mid * 2:
            possible = False
            break
    if sp[1] - sp[0] > mid:
        possible = False
    if sp[-1] - sp[-2] > mid:
        possible = False

    if not possible:
        left = mid
    else:
        right = mid
        d = mid


print("{0:.10f}".format(d))