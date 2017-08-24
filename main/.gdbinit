#GDB initialization file

##Init

#Break 1
break Sort::selection
run ../test_cases/vector5.txt

define printme
step
print v
info locals
echo \n
end

step
step
