#백준 3052
'''수 10개를 입력받은 뒤,이를 42로 나눈 나머지를 구한다.
그 다음 서로 다른 값이 몇 개 있는지 출력'''

inputList = []
for i in range(10):
    n = int(input())
    inputList.append(n)
    
NA = []

for i in inputList:
    na = i%42
    if not na in NA:
        NA.append(na)

print(len(NA))
