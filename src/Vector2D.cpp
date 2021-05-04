#include "Vector2D.h"
#include "math.h"

//Constructor
Vector2D::Vector2D(float xv, float yv)
{
	x = xv;
	y = yv;
}

//Modulo del vector
float Vector2D::modulo()
{
	float modulo = sqrt(x * x + y * y);
	return modulo;
}

//Argumento del vector
float Vector2D::argumento()
{
	float argumento = atan2(y, x);
	return argumento;
 }

//Vector Director
Vector2D Vector2D::unitario()
{
	Vector2D res(x,y);
	float mod = modulo();
	if (mod > 0.00001)
	{
		res.x /= mod;
		res.y /= mod;
	}
	return res;
}

//Operación Resta (-)
Vector2D Vector2D::operator-(Vector2D v)
{
	Vector2D res;
	res.x = x - v.x;
	res.y = y - v.y;
	return res;
}

//Operación Suma (+)
Vector2D Vector2D::operator+(Vector2D v)
{
	Vector2D resultado;
	resultado.x = x + v.x;
	resultado.y = y + v.y;
	return resultado;
}

//Producto escalar 2 vectores
float Vector2D::operator*(Vector2D v)
{
	float resultado = x *v.x + y * v.y;
	return resultado;
}

//Producto escalar vector y escala
Vector2D Vector2D::operator*(float k)
{
	Vector2D res;
	res.x = x * k;
	res.y = y * k;
	return res;
}




