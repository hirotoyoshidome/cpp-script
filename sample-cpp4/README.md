# Debug

### debug building.

```
g++ -g Main.cpp -o MAIN
```

### commands.
```
gdb MAIN

# run
run

# add breakpoint (row num)
break {row num}

# list
info breakpoints

# continue from breakpoint
continue

# delete breakpoint
delete {breakpoint number}

# print variables.(can use &var(get pointer address) and dereference(*var))
print {variable name}

# go to next code(when not set breakpoint, can use it)
next

# when function
## step in
step
## step out
finish

# quit
q
```
