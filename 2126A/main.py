t = int(input())
for _ in range(t):
    x = input()
    mini = int(x[0])
    for i in range(len(x)):
        if int(x[i]) < mini:
            mini = int(x[i])
        else:
            pass
    print(mini)