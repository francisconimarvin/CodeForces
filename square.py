test = []

for i in range(0, int(input()), 1):
    square = input().split(' ')
    test.append([int(i) for i in square])

for i in test:
        if sum(i)/4 == i[0]: print('YES')
        else: print('NO')