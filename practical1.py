
groupa=[]
groupb=[]
group1=int(input("Enter the number of players who plays cricket:-"))
group2=int(input("enter the number of players who plays badminton:-"))
for i in range(group1):
    group=input(f"Enter the number of students {i+1} in group1:-")
    groupa.append(group)

for i in range(group2):
    group=input(f"Enetr the number of students {i+1} in group 2:-")
    groupb.append(group)

def both(groupa,groupb):
    both=[]
    for student in groupa:
        if student in groupb:
            both.append(student)
            return both
        
def either(groupa,groupb):
    either=[]
    for student in groupa:
        if student not in groupb:
            either.append(student)
    for student in groupb:
        if student not in groupa:
            either.append(student)
            return either
        
bothplayers=both(groupa,groupb)
eitherplayers=either(groupa,groupb)

print("students who plays both cricket and badminton",bothplayers)
print("students who plasy either cricket or badminton",eitherplayers)
