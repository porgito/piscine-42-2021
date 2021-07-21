cat /etc/passwd | sed '1d' | sed n\;d | cut -d ':' -f1 | sed '/#/d' | rev | sort -nr | xargs
