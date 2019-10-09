# Makefile para hacer pruebas de la heramienta (de la herramienta makefile)



#Declaramos distintas variables
Objc = main.o print.o suma.o
Nombre = suma

#Llamamos como predeterminado a la función principal de compilación 
all: $(Nombre)

#Funcion principal de compilación
$(Nombre): $(Objc)
	g++ -o $(Nombre) $(Objc)

#Compilación de main.cpp
main.o: main.cpp
	g++ -c main.cpp

#Compilación de print.cpp
print.o: print.cpp
	g++ -c print.cpp

#Compilación de suma.cpp
suma.o: suma.cpp
	g++ -c suma.cpp

#Removemos (eliminamos) los archivos temporales (los ".o")
clean: 
	rm -f $(Objc)

#Sacamos por pantalla la información principal
print:
	clear
	@echo "Nombre del ejecutable: " $(Nombre)
	@echo 
	@echo "Objetos actualmente compilandose: " $(Objc)
	@echo 
	@echo 

	

