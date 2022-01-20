#백준 2675
'''문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력'''

T = int(input())
list = []


for i in range(T):
    inputStr = input().split( )
    L = []

    R = int(inputStr[0])
    S = str(inputStr[1])

    for i in S:
        L.append(i*R)

    list.append("".join(L))

for i in range(T):
    print(list[i])
