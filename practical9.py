arr1=int(input("Enter the no.of student"))
A=[]
for i in range(arr1):
    b=float (int(input("Enter first year percentage of student")))
    A.append(b)
print("the list of percentage of student")

def partition(A,low,high):
    p=A[low]
    i=low+1
    j=high
    while True:
        while (i<=j and A[i]<=p):
            i+=1
        while (i<=j and A[j]>=p):
            j-=1
        if i<=j:
            A[i],A[j]=A[j],A[i]
        else:
            break
    A[low],A[j]=A[j],A[low]
    return j
def quick_sort(A,low,high):
    



    
    if low<high:
        p=partition(A,low,high)
        quick_sort(A,low,p-1)
        quick_sort(A,p+1,high)
quick_sort(A,0,arr1-1)
print("sorted list of percenatges of students",A)