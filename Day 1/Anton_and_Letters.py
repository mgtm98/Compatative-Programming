inputStr = input()
inputStr = inputStr.replace("{", "")
inputStr = inputStr.replace("}", "")
inputStr = inputStr.replace(" ", "")
letters = inputStr.split(",")

temp = []
for letter in letters:
    if letter not in temp and letter != "": temp.append(letter)

print(len(temp))