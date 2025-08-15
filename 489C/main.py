m, s = map(int, input().split())

def find_min(m, s):
    if s == 0:
        return "0" if m == 1 else None
    res = []
    remaining = s
    for i in range(m):
        if i == 0:
            lower = 1
        else:
            lower = 0
        upper = 9
        for d in range(lower, upper + 1):
            max_remaining = (m - 1 - i) * 9
            if remaining - d >= 0 and remaining - d <= max_remaining:
                res.append(str(d))
                remaining -= d
                break
        else:
            return None
    return ''.join(res)

def find_max(m, s):
    if s == 0:
        return "0" if m == 1 else None
    res = []
    remaining = s
    for i in range(m):
        upper = 9
        if i == 0:
            lower = 1
        else:
            lower = 0
        for d in range(upper, lower - 1, -1):
            if remaining - d >= 0 and remaining - d <= (m - 1 - i) * 9:
                res.append(str(d))
                remaining -= d
                break
        else:
            return None
    return ''.join(res)

if s == 0:
    if m == 1:
        print("0 0")
    else:
        print("-1 -1")
else:
    if s > 9 * m:
        print("-1 -1")
    else:
        min_num = find_min(m, s)
        max_num = find_max(m, s)
        if min_num is None or max_num is None:
            print("-1 -1")
        else:
            print(min_num, max_num)