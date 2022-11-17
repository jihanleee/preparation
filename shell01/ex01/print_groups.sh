id -Gn $FT_USERS | sed 's/ /,/g' | tr -d '\n'
