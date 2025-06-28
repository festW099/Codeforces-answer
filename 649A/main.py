n = int(input())
sp = list(map(int, input().split()))
flag = True
for i in range(n):
    if sp[i] % 2 == 0:
        flag = False
    else:
        pass

if flag:
    print(f"1 {n}")
else:
    number = 1
    while True:
        kolvo = 0
        for i in range(n):
            if sp[i] % number == 0:
                kolvo += 1
            else:
                pass
        if kolvo > 0:
            number *= 2
        else:
            number /= 2
            break
    
    answer = 0
    for i in range(n):
        if sp[i] % number == 0:
            answer += 1
        
    print(f"{int(number)} {answer}")