//estructuras anidadas

struct InfoDireccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct Empleado{
	char nombre[];
	struct infoDireccion diEmpleado;
	double salario;
}
