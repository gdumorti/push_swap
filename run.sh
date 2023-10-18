perform_test() {
    local python_command="import random as r; print(*r.sample(range($1, $2), $3), sep=\" \");"
    local printf_string="\ntest 1: ($1->$2)*$3\n"

	printf "==================="
    printf "$printf_string"
    RAND=$(python3 -c "$python_command")
	echo ${RAND}
    #./push_swap ${RAND}
    ./push_swap ${RAND} | ./checker_Mac ${RAND}
    #time ./push_swap ${RAND} | ./checker_Mac ${RAND}
	printf "==================="
}

make
perform_test "$1" "$2" "$3"