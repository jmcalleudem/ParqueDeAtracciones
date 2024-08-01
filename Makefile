PROJECT = park

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = binary

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o, $(SRC))

all: $(OBJ_DIR) $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -r $(OBJ_DIR) -f
	rm $(PROJECT) -f

.PHONY: clean
