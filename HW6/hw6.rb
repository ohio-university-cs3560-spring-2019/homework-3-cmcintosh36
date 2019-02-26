str = gets #string from file is read 
str = str.gsub(/\bf/, "gh") #replaces "f" at end of any word with "gh"
str = str.gsub(/sh\b/, "ti") #replaces "sh" at beginning of any word with "ti"
str = str.gsub(/\Bi/B/, "o") #replaces "i" at middle of any word with "o"
str = str.gsub(/\BI/B/, "O") #replaces "I" at middle of any word with "O"
str = str.gsub(/SH\b/, "TI") #replaces "SH" at beginning of any word with "TI" 
str = str.gsub(/\BF/, "GH") #replaces "F" at end of any word with "GH"
print str #prints out results
