t = int(input())
for _ in range(t):
    srt = input().split()
    answer = ''
    for i in range(len(srt)):
        answer += srt[i][0]
    print(answer)