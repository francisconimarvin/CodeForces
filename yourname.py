for i in range(1, test_n:=int(input())+1, 1):
    name_len = int(input())
    names = input().split()
    firstName = names[0]
    anagram = names[1]
    if len(firstName) == len(anagram) and sorted(firstName) == sorted(anagram):
        print('YES')
    else:
        print('NO')
            
# INPUT
#5
#7
#humitsa mitsuha
#4
#orhi hori
#6
#aakima makima
#6
#nezuqo nezuko
#6
#misaka mikasa

# OUTPUT
#YES
#YES
#NO
#NO
#YES
