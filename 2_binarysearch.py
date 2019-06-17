def binarysearch(key,arr):
    li = 0
    ls = len(arr)-1
    while li<=ls:
          middle = int((li+ls)/2)
          if(key == arr[middle]):
             return middle
          elif key > arr[middle]:
             li = middle + 1
          else:
             ls = middle - 1
    return False

if __name__=="__main__":
    list1=[]
    for i in range(6):
        list1.append(int(input()))
    key=int(input())
    print(binarysearch(key,list1))