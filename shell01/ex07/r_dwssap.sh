cat /etc/passwd | sed 1,11d | sed s/\ //g | cut -f1 -d":" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}"p | sed 's/$/, /' | sed '$s/, /./' | tr -d '\n'
