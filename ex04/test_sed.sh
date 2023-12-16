RED="\033[31m"
GREEN="\033[32m"
NC="\033[0m"
VG="valgrind --leak-check=full --error-exitcode=42"
make re > /dev/null
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
touch not
chmod 000 not
printf "The program compiles:	${color}[%s]\n${NC}" $result
TEST='Invalid inputfile'
printf '%s	' "Test1: $TEST"
$VG ./Sed++ not test test > /dev/null 2>&1
exit_code=$?
if [ $exit_code -eq 1 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
chmod 644 not
rm not
printf "${color}[%s]\n${NC}" $result
TEST='Invalid output file'
printf '%s	' "Test2: $TEST"
echo hello > badof
touch badof.replace
chmod 000 badof.replace
$VG ./Sed++ badof hello salut > /dev/null 2>&1
exit_code=$?
if [ $exit_code -eq 1 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
chmod 644 badof.replace
rm badof badof.replace
printf "${color}[%s]\n${NC}" $result
TEST='Nonexisting file'
printf '%s	' "Test3: $TEST"
$VG ./Sed++ test hello salut > /dev/null 2>&1
exit_code=$?
if [ $exit_code -eq 1 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
printf "${color}        [%s]\n${NC}" $result
TEST='Empty file'
echo "" > test
printf '%s	' "Test4: $TEST"
$VG ./Sed++ test hello salut > /dev/null 2>&1
diff test test.replace
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
printf "${color}        [%s]\n${NC}" $result
TEST='Simple replace'
echo hello > test
printf '%s	' "Test5: $TEST"
$VG ./Sed++ test hello salut > /dev/null 2>&1
printf '%s\n' "salut" | diff test.replace -
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
printf "${color}        [%s]\n${NC}" $result
TEST='Empty replace'
echo hello > test
printf '%s	' "Test6: $TEST"
$VG ./Sed++ test hello "" > /dev/null 2>&1
printf '%s\n' "" | diff test.replace -
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
printf "${color}        [%s]\n${NC}" $result
TEST='Indentical replace'
echo hello > test
printf '%s	' "Test7: $TEST"
$VG ./Sed++ test hello hello > /dev/null 2>&1
diff test test.replace
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
elif [ $exit_code -eq 42 ]
then
	result="LEAK"
	color=$RED
else
	result="KO"
	color=$RED
fi
printf "${color}[%s]\n${NC}" $result
rm test test.replace
