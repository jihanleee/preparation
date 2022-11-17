ifconfig | grep ether | uniq | sed s/"ether"//g | tr -d '\t' | tr -d ' '
