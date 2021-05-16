nums = [1,1,1,2,2,3,3,3,4,4,5,5,5,6,7,6]

orgs = set(nums)
dups = []

for i in orgs:
    t = []
    cnt = nums.count(i)
    if(cnt > 1):
        t = [i for x in range(cnt-1)]
        dups.extend(t)
        

print("Duplicates are ::  ")
print(dups)

print("Unique elements are :: ")
print(orgs)