import sys

def solve():
    t = int(sys.stdin.readline())
    for _ in range(t):
        n, m = map(int, sys.stdin.readline().split())
        cows = []
        for _ in range(n):
            cards = list(map(int, sys.stdin.readline().split()))
            cards.sort()
            cows.append(cards)

        all_cards = []
        for i in range(n):
            for card in cows[i]:
                all_cards.append((card, i))
        all_cards.sort()

        cow_order = sorted(range(n), key=lambda x: cows[x][0])

        current_top = -1
        possible = True
        pointers = [0] * n
        for _ in range(m):
            for cow in cow_order:
                found = False
                while pointers[cow] < m:
                    if cows[cow][pointers[cow]] > current_top:
                        current_top = cows[cow][pointers[cow]]
                        pointers[cow] += 1
                        found = True
                        break
                    pointers[cow] += 1
                if not found:
                    possible = False
                    break
            if not possible:
                break

        if possible:
            print(' '.join(map(str, [x + 1 for x in cow_order])))
        else:
            cow_order = sorted(range(n), key=lambda x: cows[x][-1], reverse=True)
            current_top = -1
            possible = True
            pointers = [0] * n
            for _ in range(m):
                for cow in cow_order:
                    found = False
                    while pointers[cow] < m:
                        if cows[cow][pointers[cow]] > current_top:
                            current_top = cows[cow][pointers[cow]]
                            pointers[cow] += 1
                            found = True
                            break
                        pointers[cow] += 1
                    if not found:
                        possible = False
                        break
                if not possible:
                    break
            if possible:
                print(' '.join(map(str, [x + 1 for x in cow_order])))
            else:
                print(-1)

solve()