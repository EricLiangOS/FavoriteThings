import random
import binascii

favorite_things = "c3ba01c3b35e2bc3b70e70c38c25307719c29427051dc38dc294c3b1c3b50918c297c2b7c2adc39e17c2b272c38e20c2b3386463c2863ac3a3c2b27450c38bc291c2a724c396c382c390c292"

def printfavs():
  decoded = binascii.unhexlify(favorite_things).decode()
  random.seed("53c437_k3y")
  decrypted = ""

  for char in decoded:
    decrypted += chr(ord(char) ^ random.randint(0, 255))
  
  print(decrypted)
