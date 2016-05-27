#tablero 


char ** crearTablero (int fil, int col)
{
	char ** m;
	int i,j;
	
	/*crea un vector con la cant de puntero igual a la cant filas*/
	m=malloc(fil*sizeof(char));
	/*se crea un vector con la cant de columnas y se lo hace puntar 
	a cada fila*/
	for (i=0; i<fil; i++)
	{
		m[i]=malloc(col*sizeof(char));
	}
	
	/*rellena con O*/
	for (i=0; i<fil; i++)
		for (j=0; j<col; j++)
			m[i][j]='O';

	return m;
}

void imprimirTablero (const char ** m, int fil, int col)
{
	int j,i;

	for (i=0; i<fil;i++)
	{
		putchar('\n');
		for (j=0; j<col;j++)
			printf("%c ", m[i][j]);
	}
	putchar('\n');
}

/*le pasas el que no se puede mover*/
/*llena todos los espacios libres con la letra del que se puede mover*/ 
int rellenaTablero (char ** m, char jugador,int fil,int col,)
{
	char c;
	if (jugador==JUGADOR1)
		c=JUGADOR2;
	else if (jugador==JUGADOR2)
		c=JUGADOR1;
	for (i=0; i<fil; i++)
		for (j=0; j<col; j++) 
			if (m[i][j]='O')
			{				
				contjug++;
				m[i][j]=c;
			}
return contjug;
}
