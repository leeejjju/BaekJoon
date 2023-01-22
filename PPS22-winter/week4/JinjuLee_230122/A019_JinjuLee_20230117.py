#2577 A019 숫자의 개수
'''세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에
0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.'''

A = int(input())
B = int(input())
C = int(input())

s = str(A*B*C)

nums = [0 for i in range(10)] #0초기화된 10개 배열

for i in range(len(s)):
    nums[ord(s[i])-48]+= 1



for i in range(10):
    print(nums[i])



