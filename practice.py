def cont():
    a = [0]*50
    n = int(input("Enter how many blocks already allocated"))
    print("Enter the blocks already allocated:")
    for i in range (n):
        temp = int(input("Enter block "+str(i)))
        a[temp] ==  1

    st = int(input("Enter the starting nlock"))
    len = int(input("Enter the length of file"))
    for i in range(st,st+len):
        if a[i] == 0:
            a[i] == 1
            print(str(i)+"-->"+str(1))
        else:
            print("the file is already allocated")
            break
    x = int(input("do you want to enter more file (y-1/n-0)"))
    if x== 1:
            cont()
    else:
        exit
cont()
