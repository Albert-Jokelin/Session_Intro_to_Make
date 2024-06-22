# Demonstrates the use of if, for and call function
foo := who are you
# For each "word" in foo, output that same word with an exclamation after
bar := $(foreach wrd,$(foo),$(wrd)!)

empty :=
foobar := $(if $(empty),then!,else!)

my_awesome_function = Variable Name: $(0) First: $(1) Second: $(2) Third: $(3)


if:
	@echo "Running if"
	@echo $(foobar)

for:
# Output is "who! are! you!"
	@echo "Running for"
	@echo $(bar)

call:
	@echo "Running call function"
	@echo $(call my_awesome_function, FOSS, is, Awesome!)
