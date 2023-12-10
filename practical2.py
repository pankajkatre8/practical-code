def neither_football(cricket,badminton,total):
    return total-cricket-badminton

def neither_badminton(cricket,badminton,football,total):
    return cricket+football-badminton-neither_football(cricket,badminton,total)

cricket=int(input("Enter the number of players who plays cricket:--"))
football=int(input("enter the number of players who plays football:--"))
badminton=int(input("enter the number of players who plasy badminton"))
total=int(input("enter the number of total players"))
neither_count=neither_football(cricket,badminton,football)
neither_badminton_count=neither_badminton(cricket,badminton,football,total)
print("the list of players who plays neither cricket nor badminton",neither_count)
print("the list of plyers who plays neither badminton",neither_badminton_count)




















groupa=[]
groupb=[]
groupc=[]
group2=int(input("Enetr the number of players who plays badminton"))
group1=int(input("Enter the number of players who plays cricket"))
group3=int(input("Enetr the number of players who plays football"))

for i in range(group1):
    group=(f"Enter the no.of players{i+1} in group 1")
    groupa.append(group)
for i in range(group2):
    group=(f"Enter the no.of players{i+1}in group 2")
    groupb.append(group)
for i in range(group3):
    group=(f"Enter the no of players{i+1}in group 3")
    groupc.append(group)

def neither(groupa,groupb,groupc):
    neither=[]
    for student in groupc:
        if student in groupa & groupb:
            neither.append(student)
            return neither
        
    neitherplayers=neither(groupa,groupb,groupc)
    print("the players only in football",neitherplayers)

