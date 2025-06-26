import bisect

n = int(input())
sp_x = list(map(int, input().split()))
sp_x.sort()
q = int(input())
for _ in range(q):
    m = int(input())
    # Используем bisect_right для нахождения количества элементов <= m
    can = bisect.bisect_right(sp_x, m)
    print(can)

# bisect реализует бинарный поиск за нас, поэтому не нужно писать его вручную. Довольно удобно