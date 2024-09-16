# # key=78546921
# key1=len(str(key))
# list1=[]
# for i in range(key1):
#     list1.append(key%10)
#     key=key//10
# list1.sort()
# count=0
# for j in range(key1):
#     if(list1[j]==0):
#         count=count+1

# temp=list1[0]
# list1[0]=list1[count]
# list1[count]=temp

# s = [str(i) for i in list1]
# res = int("".join(s))
# print(res)

def unlockingKey(key):
    key1=len(str(key))
    list1=[]
    for i in range(key1):
        list1.append(key%10)
        key=key//10
    list1.sort()
    count=0
    for j in range(key1):
        if(list1[j]==0):
            count=count+1

    temp=list1[0]
    list1[0]=list1[count]
    list1[count]=temp

    s = [str(i) for i in list1]
    res = int("".join(s))
    return res


def main():
    key = int(input())


    result = unlockingKey(key)
    print(result)

if __name__ == "__main__":
    main()