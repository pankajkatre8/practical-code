Rollno=int(input("Enter the rollno of student"))
arr1=[]
for i in range(Rollno):
    num1=int(input("enter the number of student"))
    arr1.append(num1)
#binary search
def binary(arr1,target):
    left=0
    right= len(arr1)-1
    while left<=right:
        mid=(left+right)//2
        if arr1[mid]==target :
            print("student is present")
            break
        elif arr1[mid]<target:
            left=mid+1
        elif arr1[mid]>target:
            right=mid-1
    else:
     print("the student is absent")

target=int(input("enetr the rollno"))
binary(arr1,target)