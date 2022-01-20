
s = input()

s = s.upper() #대문자로
alpha = [0 for i in range(26)] #0초기화된 26개 배열

for i in range(len(s)):
    alpha[ord(s[i])-65]+= 1

max = 0
maxIndex = 0
flag = False 

for i in range(26):
    if max < alpha[i]:
        max = alpha[i]
        maxIndex = i
        flag = False
    elif max == alpha[i]:
        flag = True

if flag:
    print("?")
else:
    print(chr(maxIndex + 65))


