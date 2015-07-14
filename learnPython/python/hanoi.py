def hanoi(n, a, b, c):
    if n==1:
        print(a, '-->', c)
    else:
        hanoi(n-1, a, c, b)
        hanoi(1, a, b, c)
        hanoi(n-1, b, a, c)
n = input()
hanoi(int(n), 'A', 'B', 'C')