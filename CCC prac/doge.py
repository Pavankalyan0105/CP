def doge_count(str):
    n = len(str)
    count=0
    for i in range(n-3):
        if(str[i]=='d' and str[i+1]=='o' and str[i+3]=='e'):
            count+=1
            i+=4
    return count

str = "dogedopedog"
# print(doge_count(str))

i = 1
while i < 10:
    if i == 5:
        i+=4
    # other code
    print("i --- " , i)
    i += 1
