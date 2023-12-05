
def delete_last_lowercase(arr):
    for i in range(len(arr) - 1, -1, -1):
        if arr[i].islower():
            del arr[i]
            break
            
    return arr
def delete_last_upper(arr):
    for i in range(len(arr) - 1, -1, -1):
            if arr[i].isupper():
                del arr[i]
                break
                
    return arr


for _ in range(int(input())):
    s = input()
    arr = []
    index = [index for index in s]
    for i in index:
        
        
        if i == 'b':
            arr = delete_last_lowercase(arr)
        elif i == 'B':
                arr = delete_last_upper(arr)
        else:
             arr.append(i)
    result = ''.join(arr)
    print(result)   