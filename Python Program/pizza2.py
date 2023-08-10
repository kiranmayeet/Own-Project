import math
i = list(map(int, input().split()))
r = i[0]-i[1]
a1 = math.pi*(r**2)
a2 = math.pi*(i[0]**2)
print("{:.9f}".format((a1/a2)*100))
