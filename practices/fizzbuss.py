#IL 7th fizzbuzz

x = 0
while x <= 20:
    if x % 3 == 0:
        print("fizz")
    elif x % 5 == 0:
        print("buzz")
    elif x % 3 ==0 and x % 5 == 0:
        print("fizzbuzz")
    else:
        print(x)
    x += 1