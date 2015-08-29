# -----------------------------------------------------------------------------
# Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
# Released under the [MIT License] (http://opensource.org/licenses/MIT)
# -----------------------------------------------------------------------------

TARGET := solution

# -----------------------------------------------------------------------------

all: $(TARGET)

# -----------------------------------------------------------------------------
.PHONY: clean run

clean:
	-rm $(TARGET)

run: all
	./$(TARGET)

