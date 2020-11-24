all: copy LIBMX create_lib clean

copy:
	@mkdir obj
	@cp inc/*.h obj
	@cp src/*.c obj

LIBMX: $(libmx.a)
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c obj/*.c

create_lib:
	@ar -rcs libmx.a *.o
	@ranlib libmx.a
	@cp *.o obj

uninstall:
	@rm -rf obj
	@rm libmx.a

clean:
	@rm -r *.o
	@rm -r ./obj/*.c
	@rm -r ./obj/*.h

reinstall:
	@make uninstall
	@make
