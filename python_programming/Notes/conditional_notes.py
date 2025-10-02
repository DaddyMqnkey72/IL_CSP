#IL 7th conditional notes

#What puts something inside of the “if” statement?

homework_done = "no"

if homework_done == "yes":
    print("than do your homework!")
else: 
    print("yes you can go!")

grade = 100
if grade > 89:
    print(f"you have {grade}%, you get an A!")
elif grade > 79:
    print(f"you have {grade}%, you get a B!")
else:
    print(f"you have {grade}%, you get a C or lower!")
#what do statements do?
   #They check if something is true or false
#what are boolean statements? 
   #they are always true or false
#What do else statements do?
    # iif its not true. thats what it says
#What kind of statement do you use if you have more than 2 needed outcomes?
#What do each of the different symbols mean in conditionals?
    #< less than
    #> greater than
    #<=less than or equal to
    #>=greater than or equal to
    #== question "are they equal?"
    #! not equal to
#What are the 3 logical operators?
    #and,or,not
name=input("what is your name?")
if name == "ms larose":
    print("you are the teacher")
elif name == "tia" or name == "ashley":
    print("you are the TA")
else:
    print(f"hello {name}: you are a student")
#What are logical operators for?
    # to combine conditional statements
#What does a nested conditional statement do?
   #A nested conditional statement is a conditional statement that is inside another conditional statement.