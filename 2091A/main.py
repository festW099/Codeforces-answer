t = int(input())
for _ in range(t):
    n = int(input())
    sp = [0, 1, 0, 3, 2, 0, 2, 5]
    sp_num = list(map(int, input().split()))
    found = False
    for i in range(n):
        if sp_num[i] in sp:
            sp.remove(sp_num[i])
        if len(sp) == 0:
            print(i + 1)
            found = True
            break
    if not found:
        print(0)