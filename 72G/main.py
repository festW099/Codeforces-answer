n = int(input())
if n == 1:
    print(1)
else:
    number = 1
    last = [1]
    for _ in range(n - 1):
        number = number  + sum(last)
        last.append(number)
    print(number)