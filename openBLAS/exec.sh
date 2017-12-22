gcc -o TIME_DGEMM time_dgemm.c /usr/local/opt/openblas/lib/libopenblas.a
./TIME_DGEMM 1000 1000 1000
#gcc -o TEST_DAXPY test_daxpy.c /usr/local/opt/openblas/lib/libopenblas.a
