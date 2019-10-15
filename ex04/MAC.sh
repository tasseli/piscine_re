ifconfig |grep 'inet ' |awk '{ printf "%s\n", $2}'
