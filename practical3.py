
#to display word with longest string
def max_word(str1):
    words=str1.split()
    max_len=0
    lon_word=" "
    for word in words:
        if len(word)>max_len:
            max_len==len(word)
            lon_word=word
    return lon_word

#to count the occurence of each word in a given string

def count_occurence(str1):
    words=str1.split()
    count_occurence={}
    for word in words:
        if word in count_occurence:
            count_occurence[word]+=1
        else:
            count_occurence[word]=1
        return count_occurence

str1=input("enter any string")
lon_word=max_word(str1)
count_occurences=count_occurence(str1)
print(f"maximum count:{count_occurences}")
print(f"maximum words:{lon_word}") 


    

