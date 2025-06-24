from math import ceil
n = int(input())
friends = list(map(int, input().split()))

taxi = 0

one = friends.count(1)
two = friends.count(2)
three = friends.count(3)
four = friends.count(4)

taxi += four

min_31 = min(three, one)
taxi += min_31
three -= min_31
one -= min_31

taxi += two // 2
two = two % 2

if two > 0:
    taxi += 1
    one = max(0, one - 2)

taxi += ceil(one / 4)

taxi += three

print(taxi)