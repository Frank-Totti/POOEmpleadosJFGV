all: compilar
compilar: empleado empleadoAsalariado empleadoDeComission empleadoPorHora empleadoPlus empleadoDeDia mainEmpleados
	g++ -o out empleado.o empleadoAsalariado.o empleadoDeComission.o empleadoPorHora.o empleadoPlus.o empleadoPorDia.o mainEmpleados.o 
empleado: empleado.cpp empleado.h
	g++ -c empleado.cpp
empleadoAsalariado: empleado.h empleadoAsalariado.cpp empleadoAsalariado.h 
	g++ -c empleadoAsalariado.cpp
empleadoDeComission: empleado.h empleadoDeComission.cpp empleadoDeComission.h
	g++ -c empleadoDeComission.cpp
empleadoPorHora: empleado.h empleadoPorHora.cpp empleadoPorHora.h
	g++ -c empleadoPorHora.cpp
empleadoPlus: empleadoDeComission.h empleadoPlus.cpp empleadoPlus.h 
	g++ -c empleadoPlus.cpp
empleadoDeDia: empleado.h empleadoPorDia.h empleadoPorDia.cpp
	g++ -c empleadoPorDia.cpp
mainEmpleados: empleado.h empleadoAsalariado.h empleadoDeComission.h empleadoPorHora.h empleadoPorDia.h empleadoPlus.h 
	g++ -c mainEmpleados.cpp
clean: //Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o