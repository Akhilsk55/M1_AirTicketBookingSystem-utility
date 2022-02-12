PROJ_NAME=Booking
SRC=src/project_main.c 

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a src/project_main.c 

Clean:
	$(RM) $(call FixPath,*.out)
