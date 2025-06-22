n, k, l, c, d, p, nl, np = map(int, input().split())
all_soda = k * l
all_lime = c * d

soda_everyone = all_soda // (n * nl)
lime_everyone = all_lime // n
salt_everyone = p // (n * np)
sp = [soda_everyone, salt_everyone, lime_everyone]
print(min(sp))