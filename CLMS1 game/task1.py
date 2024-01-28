def printgraph(num):
    for i in range(0,num):
        print('*')

inp=input("Enter comma separated data: ")
my_array=inp.split(",")

for i in range(0,len(my_array)):
    printgraph(my_array[i])
