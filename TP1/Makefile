CC = gcc
CFLAGS = -Wall -Wextra

PROGRAM_NAME = conversion
SOURCE_FILES = conversion.c conversor.c pruebas.c
HEADER_FILE = encabezado.h

.PHONY: all clean

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(SOURCE_FILES) $(HEADER_FILE)
	$(CC) $(CFLAGS) -o $(PROGRAM_NAME) $(SOURCE_FILES)

clean:
	rm -f $(PROGRAM_NAME)