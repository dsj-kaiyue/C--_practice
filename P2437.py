f=list()
f.append(1)
f.append(2)
m,n=map(int,input().split())

for i in range(3,n-m+1):
    f.append(f[-1]+f[-2])
print(f[-1])



