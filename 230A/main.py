pl_power, n = map(int, input().split())
sp = []
for _ in range(n):
    power, bonus = map(int, input().split())
    sp.append([power, bonus])

win = 0
while win == 0:
    fight = False
    if len(sp) >= 1:
        for i in range(len(sp)):
            if pl_power > sp[i][0]:
                pl_power += sp[i][1]
                sp.pop(i)
                fight = True
                break
        if not fight:
            win = 2
    else:
        win = 1

if win == 2:
    print("NO")
else:
    print("YES")