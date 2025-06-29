a = int(input())
b = int(input())
n = a + b + 1
sp = []
for i in range(n):
    sp.append(i + 1)

answer = []

for i in range(a):
    answer.append(str(sp[len(sp) - a + i]))

for i in range(b - 1):
    answer.append(str(sp[len(sp) - (i + 1)]))
    
print(" ".join(answer))
#idk я не решил