alphabet = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]

favs = ["10001001000000000011010000110100110", "01100000001001100111", "0001000111001001001010010", "000100111000011010000110100110", "011000000010001101010010001011"]

def binary_convert(binary):
	s = str(binary)

	ans = 0
	for i in range(len(s)):
		
		ans += (2*int(s[i]))**(len(s) - i - 1)
	
	if s[-1] == "0":
		ans -= 1

	return ans

def mergesort(L,R):
	global favs
	if L>= R:
		return
	mid = (L+R)//2
	mergesort(L, mid)
	mergesort(mid+1,R)
	i = L
	j = mid + 1
	words = []
	while i <=mid and j<= R:
		if favs[i] < favs[j]:
			words.append(favs[i])
			i+= 1
		else:
			words.append(favs[j])
			j+= 1

	for t in range(i,mid+1):
		words.append(favs[t])
  
	for t in range(j, R+1):
		words.append(favs[t])
  
	for i in range(R-L+1):
		favs[i+L] = words[i]

def printfavs():
	mergesort(0,len(favs)-1)

	for item in favs:
		word = ""
		for index in range(len(item)//5):
			char = alphabet[binary_convert(int(item[index*5:index*5+5]))]
			word += char
	
		word = word[0].upper() + word[1:]

		print("- " + word)

