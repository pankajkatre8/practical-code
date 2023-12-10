Rollno=int(input("Enter the total no.of students"))
arr1=[]
for i in range(Rollno):
    Rollnos=int(input("enter the numbers"))
    arr1.append(Rollnos)

#linear search
def linear(arr1,target):
    for i in range (len(arr1)):
        if arr1[i]==target:
            print("student is present")
            return
        
    print("student is absent")

target=int(input("enter the number you want to check"))
linear(arr1,target)
    