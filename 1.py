import os
os.system("clear")
a= input("enter a word: ")
vowel=["a","e","i","u","o"]
count=0
for i in a:
    for j in vowel:
        if i==j:
            count+=1
print(count)