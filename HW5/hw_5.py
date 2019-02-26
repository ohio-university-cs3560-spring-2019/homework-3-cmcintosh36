file = raw_input("Enter file: ")
input = open(file, 'r')

lineCount = 0
wordCount = 0
characterCount = 0

with input as x:
	for line in x:
		words = line.split()
		print words

		lineCount += 1
		wordCount += len(words)
		characterCount += len(line)

print "Line Count: ", lineCount, "lines"
print "Word Count: ", wordCount, "words"
print "Character Count: ", characterCount, "charaters"
