def display (matrix):
    for row in matrix:
        print(row)

#input for matrix 1
rows1=int(input("Enter the number of row in matrix1:-"))
col1=int(input("enter the number of column in matrix1:-"))
mat1=[]
print("Elements in matrix1:-")

for i in range (rows1):
    row=[int(input())for i in range (col1)]
    mat1.append(row)

#input for matrix 2

row2=int(input("Enter the number of row in matrix2:-"))
col2=int(input("Enter the number of row in matrix1:-"))
mat2=[]
print("Elements in matrix2:- ")
for i in range (row2):
    row=[int(input())for j in range (col2)]
    mat2.append(row)

#addition
result_add=[[mat1[i][j]+mat2[i][j] for j in range (col1)]for i in range(rows1)]
print("\nmatrix addition:")
display (result_add)

#subtraction
result_subt=[[mat1[i][j]-mat2[i][j] for j in range(col1)]for i in range(rows1)]
print("\nsubtraction is")
display(result_subt)

#multiplication
result_mult=[[sum(mat1[i][k]*mat2[k][j] for k in range (col2)) for j  in range (col2)]for i in range (rows1)]
print("\nmultiplication is")
display(result_mult)

#transpose
result_transp=[[mat1[j][i]for j in range (rows1)]for i in range (col1)]
print("\nTranspose is")
display(result_transp)

#tarnspose2
result_transp2=[[mat2[j][i] for j in range (row2)] for i in range (col2)]
print("\ntranspose is")
display(result_transp2)