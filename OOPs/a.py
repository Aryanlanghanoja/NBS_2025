a = 5

def main() :
    a = 15
    print(a)
    B()

def B() :
    global a 
    a = 10
    print(a)
    A()

def A() :
    print(a)

main()
print(a)