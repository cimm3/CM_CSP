color = input("What is your favorite color: ").strip()

print(color, "is a really cool color")

alphabet = "abcdefghijklmnopqrstuvwxyz"
sentence = "The quick brown fox jumps over the lazy dog."

print(alphabet[4 : 8])
word = input("what word do you want to change: ")
new = input("what will new word do you want: ")
start = sentence.find(word)
print(sentence[start:start+len(word)]+ ")")
print(sentence)
sentence = sentence.replace(word,new)
print(sentence)