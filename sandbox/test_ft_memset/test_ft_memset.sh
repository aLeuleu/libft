gcc ft_bzero.c test_ft_bzero.c ft_memset.c
echo `./a.out 1 | tr -d '\0' ` > 1.txt
echo `./a.out 2 | tr -d '\0' ` > 2.txt
diff 1.txt 2.txt > diff.txt
if [ -s diff.txt ]
	then
		echo "❌❌ " $red KO ! "❌❌" $normal
	else
		echo $green "   OK !✔️" $normal
		rm -rf *.txt a.out
fi
