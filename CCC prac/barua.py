def isBarua(num):
    num = str(num)
    if num[0]=='0':
        return False
    
    count=0
    
    i = 1
    
    while i<len(num):
        if num[i]=='1' or num[i]=='0':
            if(num[i]=='1'):
                count+=1
            if count >1:
                return False
        else:
            return False
            
print(isBarua(010000000000000))