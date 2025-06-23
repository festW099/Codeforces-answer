a = input().strip()
if a == a.upper() or (a[0] == a[0].lower() and a[1:] == a[1:].upper()):
    new_a = a.swapcase()
    print(new_a)
else:
    print(a)