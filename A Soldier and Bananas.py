k, n, w = raw_input().split()

k = int(k)
n = int(n)
w = int(w)
summ = 0

for i in range(1, w+1):
    summ = summ + k*i


result = summ - n

if result > 0:
    print(result)
else:
    print(0)
