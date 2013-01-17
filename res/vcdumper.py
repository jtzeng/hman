#!/usr/bin/python
# Sorts a specified vocabulary list into
# multiple files by word => definition.

# Constants.
FILE_INPUT = 'vclist.txt'
FILE_WORDS = 'vcwords.txt'
FILE_DEFNS = 'vcdefns.txt'

# Open the input stream and read the words.
fp = open(FILE_INPUT, 'r')
lines = fp.readlines()
fp.close()

# Open the output streams.
fp_out_words = open(FILE_WORDS, 'w')
fp_out_defns = open(FILE_DEFNS, 'w')

# Print out the data.
for line in lines:
	arr = line.split(' ')
	word = arr[0]
	defn = ' '.join(arr[1:-1])
	fp_out_words.write(word + '\n')
	fp_out_defns.write(defn + '\n')

# Close the streams.
fp_out_words.flush()
fp_out_defns.flush()
fp_out_words.close()
fp_out_defns.close()
