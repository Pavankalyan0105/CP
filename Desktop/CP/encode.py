s = input()

i=0
count=0
ans = ""
while i<len(s):
    count=0
    while i<len(s) and s[i]=='1':
        count+=1
        i+=1
    if count>0:
        print(count,end="")

    if(i+1<len(s) and s[i+1] == '0'):
        print(0,end="")
        i+=1

    i+=1


print(ans)

