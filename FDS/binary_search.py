
def binary_search(lst,a):
    l = 0 
    r = len(lst) - 1
    # m = (l+ r) // 2
    while l <= r:
        m = (l  + r) // 2   
         
        if a > lst[m]:
            l = m + 1 
        elif a < lst[m]:
            r = m - 1
        else: 
            print(m)
            return True
    return False
