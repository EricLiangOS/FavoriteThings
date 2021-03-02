objList = []

def objAdd():
    obj = input("List one of your favorite things: ")
    objList.append(obj)

def end():
  while True:
    objAdd();
    end = input("Any more? ")
    if end == "No" or end == "n":
      break

end();
print("Your favorite objects are: ")
for item in objList:
  print(item)
