n := File standardInput readLine asNumber

if (n == 1 or n == 2) then (
    if (n == 1) then (1 println) else (2 println)
) else (
    a := 1
    b := 2
    for (i, 3, n, 1,
        c := a + b
        a = b
        b = c
    )
    b println
)
// идите нахуй, я больше никогда не буду программировать на этом языке. Я даже не знал что это за язык