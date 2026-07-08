nums=[1,2,3,4,5]
target=5
dic={}
a=0
for j in nums:

    dic[j]=a
    a+=1
for i in range(len(nums)):

    needed=target-nums[i]
    if needed in dic and dic[needed] != i:
        print((dic[needed],i))