#find . -type f -iname "*.sh" -printf "%f\n"
find . -iname "*.sh" | sed "s/.*\///; s/\.sh//"
