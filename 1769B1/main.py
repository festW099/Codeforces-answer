n = input()
sp = list(map(int, input().split()))
all = sum(sp)
result = set()
result.add(100)
result.add(0)

current_sum = 0
for packet in sp:
    for size in range(1, packet + 1):
        pr_now = int(100 * size // packet)
        pr_all = int(100 * (size + current_sum) // all)
        if pr_all == pr_now:
            result.add(pr_all)
        else:
            pass
    current_sum += packet

print(" ".join(map(str, sorted(result))))