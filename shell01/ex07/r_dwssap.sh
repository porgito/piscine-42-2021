cat /etc/passwd | sed '1d' | sed n\;d | cut -d ':' -f1 | sed '/#/d' | rev | sort -nr | sed -n "$FT_LINE1,$FT_LINE2 p" |  xargs | sed s/' '/', '/g | tr '\n' '.'
