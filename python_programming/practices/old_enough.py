#IL 7th old enough practice

age = int(input("how old are you?"))
if age >= 18:
    print("you are old enough to vote!")
elif age >= 16:
    print(f"if yo are {age}, you can drive")
elif age >= 15:
    print(f"if you are {age} you can get your learners permit")
elif age <=15:
    print(f"if you are {age}, you can go to school")
else:
    print(f"if you are{age} your not old enough, skedaddle")