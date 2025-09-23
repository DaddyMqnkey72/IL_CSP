#IL 7th time of day

time = int(input("Hi, what time it its make sure to put in military time "))

if time <= 12:
    print(f"Good morning")
elif time <= 18:
    print(f"Good afertnoon")
else:
    print(f"Good evening")