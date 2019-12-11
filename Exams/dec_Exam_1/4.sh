find  . -name 4.txt -exec grep -c Linux '{}' \; | awk '{x+=$0;}END{print x}'
