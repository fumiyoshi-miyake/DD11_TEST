#makeと入力した場合の誤動作防止
.PHONY: all
all: ;

SRC = main.c bubblefunc.c
# UNAME = $(shell whoami)
RELEASE_DIR = release

.PHONY: debug
debug: d_build

.PHONY: release
release: r_build

make_dir: 
	@if [ ! -d $(RELEASE_DIR) ]; then \
		echo ";; mkdir $(RELEASE_DIR)"; mkdir $(RELEASE_DIR); \
	fi


.PHONY: debug_build
debug_build:
	gcc -g -O0 $(SRC)
.PHONY: d_build
d_build: debug_build ;


R_OBJ = $(patsubst %.c,$(RELEASE_DIR)/%.o,$(SRC))
$(R_OBJ) : $(RELEASE_DIR)/%.o: %.c
	gcc -o $@ -c $<
$(RELEASE_DIR)/main : $(R_OBJ)
	gcc -o $@ $(R_OBJ)
.PHONY: release_build
release_build: $(RELEASE_DIR)/main
.PHONY: r_build
r_build: make_dir release_build ;


.PHONY: clean
clean: 
	@rm -rf *.exe *.o *~ *.bak *.deps *.tgz $(RELEASE_DIR) *.out

.PHONY: redebug
redebug: clean debug ;

.PHONY: rerelease
rerelease: clean release ;
