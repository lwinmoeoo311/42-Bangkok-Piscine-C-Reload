#ifconfig | grep ether | awk -F ' ' '{printt $3}'
ifconfig | grep -oE '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'
