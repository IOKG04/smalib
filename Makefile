tests:
	mkdir build/
	gcc -o build/tests src/tests.c src/strtools.c -D STRDEFRAG_TEST -D STRREPEAT_TEST

cleanup:
	rm -rf build/
