for((i=1; i<=10; ++i)); do
    echo $i
    ./gen $i > int
    ./test < int
    # ./test < int > out1
    # ./brute < int > out2
    # diff -w out1 out2 || break
done