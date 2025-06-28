n = int(input())
sp_r = list(map(int, input().split()))
sp = sp_r.copy()
sp = list(set(sp))
if len(sp) < 3:
    print("-1 -1 -1")
    exit()
sp.sort()
mx = max(sp)
mn = min(sp)

print(f"{sp_r.index(mn) + 1} {sp_r.index(sp[1]) + 1} {sp_r.index(mx) + 1}")