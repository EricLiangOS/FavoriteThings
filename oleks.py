items = ["algorithms", "guitar", "rust", "Zarya", "Pokemon Go"]

def printfavs(lim):
	if (lim == len(items)):
		return
	else:
		print("- " + items[lim])
		printfavs(lim + 1)