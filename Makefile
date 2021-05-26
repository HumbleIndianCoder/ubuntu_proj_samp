
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin


EXE := $(BIN_DIR)/main.exe
SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)




all: $(EXE)

$(EXE): $(OBJ)
	gcc $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c $< -o $@

clean:
	@$(RM) -rf $(BIN_DIR)/* $(OBJ_DIR)/*

