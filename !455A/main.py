n = int(input())
a = list(map(int, input().split()))

if not a:
    print(0)
    exit()

max_num = max(a)

# Создаем массив для подсчета частот чисел (+2 для безопасной обработки x+1)
count = [0] * (max_num + 2)

# Заполняем массив частот: count[x] = сколько раз встречается число x
for num in a:
    count[num] += 1

# Инициализация массива для дп
dp = [0] * (max_num + 2)

# Базовый случай: для x=1 максимальная сумма - это все единицы
dp[1] = count[1] * 1  # количество единиц * значение единицы

# Заполняем dp для всех чисел от 2 до максимального
for x in range(2, max_num + 1):
    # На каждом шаге выбираем оптимальный вариант:
    # Вариант 1: Не берем текущее число x - берем предыдущий максимум (dp[x-1])
    # Вариант 2: Берем текущее число x - получаем x*count[x] + dp[x-2]
    # (так как x-1 мы взять не можем)
    dp[x] = max(dp[x - 1], dp[x - 2] + x * count[x])

print(dp[max_num])