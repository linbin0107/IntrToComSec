
CC = gcc
FLAGS = -fno-stack-protector

TARGET = narnia0 example2 example3 example4

default: $(TARGET)
#	$(CC) $(FLAGS) $< -o $@

example2:
	$(CC) $(FLAGS) -o example2 example2.c

example3:
	$(CC) $(FLAGS) -o example3 example3.c

example4:
	$(CC) $(FLAGS) -o example4 example4.c

narnia0:
	$(CC) $(FLAGS) -o narnia0 narnia0.c
clean:
	@rm $(TARGET)
