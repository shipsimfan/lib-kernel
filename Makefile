# DIRECTORIES
SRC_DIR := ./src
OBJ_DIR := ./obj
INCLUDE_DIR := ./include
SYSROOT_DIR := ../../sysroot
LIB_INSTALL_DIR := $(SYSROOT_DIR)/los/lib
INCLUDE_INSTALL_DIR := $(SYSROOT_DIR)/los

# SOURCE FILES
C_SRC_FILES := $(shell find $(SRC_DIR) -name '*.c')
ASM_SRC_FILES := $(shell find $(SRC_DIR) -name '*.asm')

# OBJECT FILES
C_OBJ_FILES := $(C_SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
ASM_OBJ_FILES := $(ASM_SRC_FILES:$(SRC_DIR)/%.asm=$(OBJ_DIR)/%.asm.o)

# TARGET
TARGET := libkernel.a

# PROGRAMS
ASM := nasm
ASM_FLAGS := -f elf64 -g -F dwarf

CC := clang
CC_FLAGS := --target=x86_64-los --sysroot=$(SYSROOT_DIR) -Wall -g -c -I$(INCLUDE_DIR)

AR := llvm-ar
AR_FLAGS := rcs

# COLORS
CYAN := \033[36;1m
RESET := \033[0m

# RULES
all: dirs $(TARGET)

install: all
	@cp -r $(INCLUDE_DIR) $(INCLUDE_INSTALL_DIR)

clean:
	@rm -rf $(OBJ_DIR)/*
	@rm -f $(TARGET)
	
# COMPILATION RULES
.SECONDEXPANSION:

$(TARGET): $(ASM_OBJ_FILES) $(C_OBJ_FILES)
	@echo " $(CYAN)Archiving$(RESET) $@ . . ."
	@$(AR) $(AR_FLAGS) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $$(@D)/.
	@echo " $(CYAN)Compiling$(RESET) $^ . . ."
	@$(CC) $(CC_FLAGS) -o $@ $^

$(OBJ_DIR)/%.asm.o: $(SRC_DIR)/%.asm | $$(@D)/.
	@echo "$(CYAN)Assembling$(RESET) $^ . . ."
	@$(ASM) $(ASM_FLAGS) -o $@ $^

# DIRECTORY RULES
$(OBJ_DIR)/.:
	@mkdir -p $@

$(OBJ_DIR)%/.:
	@mkdir -p $@

dirs:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(LIB_INSTALL_DIR)/obj

# . RULES
.PRECIOUS: $(OBJ_DIR)/. $(OBJ_DIR)%/.
.PHONY: dirs
