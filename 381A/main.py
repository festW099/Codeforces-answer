n = int(input())
cards = list(map(int, input().split()))
a,b = 0, 0
flag_a = True
for i in range(n):
    if flag_a:
        if cards[0] > cards[-1]:
            a += cards[0]
            cards.pop(0)
        else:
            a += cards[-1]
            cards.pop(-1)
        flag_a = False
    else:
        if cards[0] > cards[-1]:
            b += cards[0]
            cards.pop(0)
        else:
            b += cards[-1]
            cards.pop(-1)
        flag_a = True

print(f"{a} {b}")