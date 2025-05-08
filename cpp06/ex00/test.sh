#!/bin/bash
# roi 0507

# Colors
BLUE='\033[0;34m'
RED='\033[0;31m'
GREEN='\033[0;32m'
# NC - NoColor
NC='\033[0m'
# \033: Это escape-последовательность, которая обозначает начало управляющего кода ANSI.
# [0m: Это управляющий код ANSI, который сбрасывает все атрибуты текста (цвет, стиль и т.д.) к значениям по умолчанию.


program="convert"

# roi
echo $program "!!!!!\n"

make re

# Check if the compilation was successful
if [ -f "$program" ]; then # -f: Проверяет, существует ли файл и является ли он обычным файлом.

	echo -e "Executing $program...\n"
	echo -e $BLUE "********* CHAR TESTS ************\n" $NC
	./"$program" "a"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" " "
	echo -e "\n"

	echo -e $BLUE "********* INT TESTS *************\n" $NC
	./"$program" "0"
	echo -e $GREEN "\n---------------------------------\n" $NC
    ./"$program" "42"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "-42"
	echo -e "\n"

	echo -e $BLUE "********* FLOAT TESTS ***********\n" $NC
	./"$program" "42.0f"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "-42.0f"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "0.0f"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "nanf"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "+inff"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "-inff"
	echo -e "\n"


	echo -e $BLUE "********* DOUBLE TESTS **********\n" $NC

	./"$program" "42.0"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "-42.0"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "0.0"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "nan"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "+inf"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "-inf"
	echo -e "\n"

	echo -e $BLUE "********* INVALID TESTS **********\n" $NC
	./"$program" "42.0.0"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "42.0.0f"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "fail"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "42.0fail"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "fail42.0"
	echo -e $GREEN "\n---------------------------------\n" $NC
	./"$program" "0.4ff"


else
    echo "Compilation failed. Cannot execute $program."
fi