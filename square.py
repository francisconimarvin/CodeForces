test = []

for i in range(0, int(input()), 1):
    square = input().split(' ')
    test.append([int(i) for i in square])

for i in test:
        if sum(i)/4 == i[0] & i[1] & i[2] & i[3]: print('YES')
        else: print('NO')


#INPUT:
#7
#1 2 3 4
#1 1 1 1
#2 2 2 2
#1 2 1 2
#1 1 5 5
#5 5 5 5
#4 10 5 9

#OUTPUT:
#NO
#YES
#YES
#NO
#NO
#YES
#NO
