def frequency(str1_text,str1_char):
    count=0
    for char in str1_text:
        if char==str1_char:
            count=+1
    else:
     return count
    
    #to cheack whether a given string is palindrome or not
def palindrome(str1_text):
   str1_text=str1_text.lower().translate(str.maketrans("",'',"* & ^ % $ # @ !"))
   return str1_text==str1_text[::-1]
      
      #to check the index
def substring_index(str1_text,substring):
   index=str1_text.find(substring)
   return index

str1_text=input("Enter any string")
str1_char=input("Enetr any character in string")
substring=input("Enter any substring ")

#frequency of a character
char_count=str1_text.count(str1_char)
print(f"Frequency of occurence of particular character'{str1_char}':{char_count}")

#whether a string is a palindrome or not
is_pal=palindrome(str1_text)
if is_pal:
   print(f"the string is a palindrome")
else:
   print(f"the string is not a palindrome")

   #to display index of appearance of string

index_ocuurence=substring_index(str1_text,substring)
print(f"Index of substring is",index_ocuurence)



