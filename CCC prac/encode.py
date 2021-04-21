s = input()

i=0
count=0
ans = ""
while i<len(s):
    count=0
    while i<len(s) and s[i]=='1':
        count+=1
        i+=1
    print(count,end="")

    i+=1


# print(ans)

