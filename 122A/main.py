n = int(input())
flag = True

for digit in str(n):
    if digit not in {'4', '7'}:
        flag = False
        break

if flag:
    print("YES")
else:
    almost = False
    for i in range(1, n + 1):
        flag_i = True
        for digit in str(i):
            if digit not in {'4', '7'}:
                flag_i = False
                break
        
        if flag_i and n % i == 0:
            almost = True
            break 
    
    print("YES" if almost else "NO")