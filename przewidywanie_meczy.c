#include<stdio.h>
struct mecz
{
	//ogolna roznica ratingow w przewidywanym meczu
	float roznica_ratingow; //gospodarz - gosc
	//5 ostatnich meczy gospodarza
	float strzelone_gospodarza_mecz1; //1 - oznacza ostatni mecz
	float stracone_gospodarza_mecz1;
	float roznica_ratingow_gospodarza_mecz1;
	float strzelone_gospodarza_mecz2;
	float stracone_gospodarza_mecz2;
	float roznica_ratingow_gospodarza_mecz2;
	float strzelone_gospodarza_mecz3;
	float stracone_gospodarza_mecz3;
	float roznica_ratingow_gospodarza_mecz3;
	float strzelone_gospodarza_mecz4;
	float stracone_gospodarza_mecz4;
	float roznica_ratingow_gospodarza_mecz4;
	float strzelone_gospodarza_mecz5;
	float stracone_gospodarza_mecz5;
	float roznica_ratingow_gospodarza_mecz5;
	//5 ostatnich meczy goscia
	float strzelone_goscia_mecz1; //1 - oznacza ostatni mecz
	float stracone_goscia_mecz1;
	float roznica_ratingow_goscia_mecz1;
	float strzelone_goscia_mecz2;
	float stracone_goscia_mecz2;
	float roznica_ratingow_goscia_mecz2;
	float strzelone_goscia_mecz3;
	float stracone_goscia_mecz3;
	float roznica_ratingow_goscia_mecz3;
	float strzelone_goscia_mecz4;
	float stracone_goscia_mecz4;
	float roznica_ratingow_goscia_mecz4;
	float strzelone_goscia_mecz5;
	float stracone_goscia_mecz5;
	float roznica_ratingow_goscia_mecz5;
	//bezposrednie mecze
	float bezposrednio_strzelone_gospodarza_mecz1; //1 - oznacza ostatni mecz
	float bezposrednio_strzelone_goscia_mecz1;
	float bezposrednio_roznica_ratingow_mecz1;
	float bezposrednio_strzelone_gospodarza_mecz2;
	float bezposrednio_strzelone_goscia_mecz2;
	float bezposrednio_roznica_ratingow_mecz2;
	float bezposrednio_strzelone_gospodarza_mecz3;
	float bezposrednio_strzelone_goscia_mecz3;
	float bezposrednio_roznica_ratingow_mecz3;
};
void zapisz_wartosci(float a[40])
{
	//zmienne do przeliczania goli przez rating
	a[0] = 0; // rating > 0
	a[1] = 0; // rating < 0
	a[2] = 0; // rating > 0
	a[3] = 0; // rating < 0
	// suma strzelonch przez gospodarza w 5 ostatnich meczach
	a[4] = 0;
	a[5] = 0;
	a[6] = 0;
	a[7] = 0;
	a[8] = 0;
	// suma bezposrednio strzelonych przez gospodarza w 3 ostatnich meczach
	a[9] = 0;
	a[10] = 0;
	a[11] = 0;
	// suma straconych przez gosci w 5 ostatnich meczach
	a[12] = 0;
	a[13] = 0;
	a[14] = 0;
	a[15] = 0;
	a[16] = 0;
	//suma strzelonych gospodarza
	a[17] = 0;
	//suma bezposrednio strzelonych gospodarza
	a[18] = 0;
	//suma straconych goscia
	a[19] = 0;
	//zmienne do przeliczania goli przez rating
	a[20] = 0; // rating > 0
	a[21] = 0; // rating < 0
	a[22] = 0; // rating > 0
	a[23] = 0; // rating < 0
	// suma strzelonch przez goscia w 5 ostatnich meczach
	a[24] = 0;
	a[25] = 0;
	a[26] = 0;
	a[27] = 0;
	a[28] = 0;
	// suma bezposrednio strzelonych przez goscia w 3 ostatnich meczach
	a[29] = 0;
	a[30] = 0;
	a[31] = 0;
	// suma straconych przez gospodarza w 5 ostatnich meczach
	a[32] = 0;
	a[33] = 0;
	a[34] = 0;
	a[35] = 0;
	a[36] = 0;
	//suma strzelonych goscia
	a[37] = 0;
	//suma bezposrednio strzelonych goscia
	a[38] = 0;
	//suma straconych gospodarza
	a[39] = 0;
}
void przelicz_bramki_gospodarza(float a[40],struct mecz *mecze)
{
	// strzelone przez gospodarza
	float ratio = mecze->roznica_ratingow_gospodarza_mecz1 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->strzelone_gospodarza_mecz1 *= 1 - ratio*a[0];
		mecze->strzelone_gospodarza_mecz1 -= ratio*a[2];
	} 
	else 
	{
		mecze->strzelone_gospodarza_mecz1 *= 1 - ratio*a[1];
		mecze->strzelone_gospodarza_mecz1 -= ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_gospodarza_mecz2 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->strzelone_gospodarza_mecz2 *= 1 - ratio*a[0];
		mecze->strzelone_gospodarza_mecz2 -= ratio*a[2];
	} 
	else 
	{
		mecze->strzelone_gospodarza_mecz2 *= 1 - ratio*a[1];
		mecze->strzelone_gospodarza_mecz2 -= ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_gospodarza_mecz3 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->strzelone_gospodarza_mecz3 *= 1 - ratio*a[0];
		mecze->strzelone_gospodarza_mecz3 -= ratio*a[2];
	} 
	else 
	{
		mecze->strzelone_gospodarza_mecz3 *= 1 - ratio*a[1];
		mecze->strzelone_gospodarza_mecz3 -= ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_gospodarza_mecz4 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->strzelone_gospodarza_mecz4 *= 1 - ratio*a[0];
		mecze->strzelone_gospodarza_mecz4 -= ratio*a[2];
	} 
	else 
	{
		mecze->strzelone_gospodarza_mecz4 *= 1 - ratio*a[1];
		mecze->strzelone_gospodarza_mecz4 -= ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_gospodarza_mecz5 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->strzelone_gospodarza_mecz5 *= 1 - ratio*a[0];
		mecze->strzelone_gospodarza_mecz5 -= ratio*a[2];
	} 
	else 
	{
		mecze->strzelone_gospodarza_mecz5 *= 1 - ratio*a[1];
		mecze->strzelone_gospodarza_mecz5 -= ratio*a[3];
	}
	//bezposrednio strzelone przez gospodarza
	ratio = mecze->bezposrednio_roznica_ratingow_mecz1 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz1 *= 1 - ratio*a[0];
		mecze->bezposrednio_strzelone_gospodarza_mecz1 -= ratio*a[2];
	}
	else 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz1 *= 1 - ratio*a[1];
		mecze->bezposrednio_strzelone_gospodarza_mecz1 -= ratio*a[3];
	}
	ratio = mecze->bezposrednio_roznica_ratingow_mecz2 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz2 *= 1 - ratio*a[0];
		mecze->bezposrednio_strzelone_gospodarza_mecz2 -= ratio*a[2];
	}
	else 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz2 *= 1 - ratio*a[1];
		mecze->bezposrednio_strzelone_gospodarza_mecz2 -= ratio*a[3];
	}
	ratio = mecze->bezposrednio_roznica_ratingow_mecz3 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz3 *= 1 - ratio*a[0];
		mecze->bezposrednio_strzelone_gospodarza_mecz3 -= ratio*a[2];
	}
	else 
	{
		mecze->bezposrednio_strzelone_gospodarza_mecz3 *= 1 - ratio*a[1];
		mecze->bezposrednio_strzelone_gospodarza_mecz3 -= ratio*a[3];
	}
	//stracone gosci
	ratio = mecze->roznica_ratingow_goscia_mecz1 + mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->stracone_goscia_mecz1 *= 1 + ratio*a[0];
		mecze->stracone_goscia_mecz1 += ratio*a[2];
	}
	else
	{
		mecze->stracone_goscia_mecz1 *= 1 + ratio*a[1];
		mecze->stracone_goscia_mecz1 += ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz2 + mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->stracone_goscia_mecz2 *= 1 + ratio*a[0];
		mecze->stracone_goscia_mecz2 += ratio*a[2];
	}
	else
	{
		mecze->stracone_goscia_mecz2 *= 1 + ratio*a[1];
		mecze->stracone_goscia_mecz2 += ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz3 + mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->stracone_goscia_mecz3 *= 1 + ratio*a[0];
		mecze->stracone_goscia_mecz3 += ratio*a[2];
	}
	else
	{
		mecze->stracone_goscia_mecz3 *= 1 + ratio*a[1];
		mecze->stracone_goscia_mecz3 += ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz4 + mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->stracone_goscia_mecz4 *= 1 + ratio*a[0];
		mecze->stracone_goscia_mecz4 += ratio*a[2];
	}
	else
	{
		mecze->stracone_goscia_mecz4 *= 1 + ratio*a[1];
		mecze->stracone_goscia_mecz4 += ratio*a[3];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz5 + mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->stracone_goscia_mecz5 *= 1 + ratio*a[0];
		mecze->stracone_goscia_mecz5 += ratio*a[2];
	}
	else
	{
		mecze->stracone_goscia_mecz5 *= 1 + ratio*a[1];
		mecze->stracone_goscia_mecz5 += ratio*a[3];
	}
	if (mecze->strzelone_gospodarza_mecz1 < 0) mecze->strzelone_gospodarza_mecz1 = 0;
	if (mecze->strzelone_gospodarza_mecz2 < 0) mecze->strzelone_gospodarza_mecz2 = 0;
	if (mecze->strzelone_gospodarza_mecz3 < 0) mecze->strzelone_gospodarza_mecz3 = 0;
	if (mecze->strzelone_gospodarza_mecz4 < 0) mecze->strzelone_gospodarza_mecz4 = 0;
	if (mecze->strzelone_gospodarza_mecz5 < 0) mecze->strzelone_gospodarza_mecz5 = 0;
	if (mecze->bezposrednio_strzelone_gospodarza_mecz1 < 0) mecze->bezposrednio_strzelone_gospodarza_mecz1 = 0;
	if (mecze->bezposrednio_strzelone_gospodarza_mecz2 < 0) mecze->bezposrednio_strzelone_gospodarza_mecz2 = 0;
	if (mecze->bezposrednio_strzelone_gospodarza_mecz3 < 0) mecze->bezposrednio_strzelone_gospodarza_mecz3 = 0;
	if (mecze->stracone_goscia_mecz1 < 0) mecze->stracone_goscia_mecz1 = 0;
	if (mecze->stracone_goscia_mecz2 < 0) mecze->stracone_goscia_mecz2 = 0;
	if (mecze->stracone_goscia_mecz3 < 0) mecze->stracone_goscia_mecz3 = 0;
	if (mecze->stracone_goscia_mecz4 < 0) mecze->stracone_goscia_mecz4 = 0;
	if (mecze->stracone_goscia_mecz5 < 0) mecze->stracone_goscia_mecz5 = 0;
}
void przelicz_bramki_goscia(float a[40],struct mecz *mecze)
{
	// strzelone przez goscia
	float ratio = mecze->roznica_ratingow_goscia_mecz1 + mecze->roznica_ratingow;
	if(ratio > 0)
	{
		mecze->strzelone_goscia_mecz1 *= 1 - ratio*a[20];
		mecze->strzelone_goscia_mecz1 -= ratio*a[22];
	} 
	else 
	{
		mecze->strzelone_goscia_mecz1 *= 1 - ratio*a[21];
		mecze->strzelone_goscia_mecz1 -= ratio*a[23];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz2 + mecze->roznica_ratingow;
	if(ratio > 0)
	{
		mecze->strzelone_goscia_mecz2 *= 1 - ratio*a[20];
		mecze->strzelone_goscia_mecz2 -= ratio*a[22];
	} 
	else 
	{
		mecze->strzelone_goscia_mecz2 *= 1 - ratio*a[21];
		mecze->strzelone_goscia_mecz2 -= ratio*a[23];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz3 + mecze->roznica_ratingow;
	if(ratio > 0)
	{
		mecze->strzelone_goscia_mecz3 *= 1 - ratio*a[20];
		mecze->strzelone_goscia_mecz3 -= ratio*a[22];
	} 
	else 
	{
		mecze->strzelone_goscia_mecz3 *= 1 - ratio*a[21];
		mecze->strzelone_goscia_mecz3 -= ratio*a[23];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz4 + mecze->roznica_ratingow;
	if(ratio > 0)
	{
		mecze->strzelone_goscia_mecz4 *= 1 - ratio*a[20];
		mecze->strzelone_goscia_mecz4 -= ratio*a[22];
	} 
	else 
	{
		mecze->strzelone_goscia_mecz4 *= 1 - ratio*a[21];
		mecze->strzelone_goscia_mecz4 -= ratio*a[23];
	}
	ratio = mecze->roznica_ratingow_goscia_mecz5 + mecze->roznica_ratingow;
	if(ratio > 0)
	{
		mecze->strzelone_goscia_mecz5 *= 1 - ratio*a[20];
		mecze->strzelone_goscia_mecz5 -= ratio*a[22];
	} 
	else 
	{
		mecze->strzelone_goscia_mecz5 *= 1 - ratio*a[21];
		mecze->strzelone_goscia_mecz5 -= ratio*a[23];
	}
	//bezposrednio strzelone przez goscia
	ratio = mecze->bezposrednio_roznica_ratingow_mecz1 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_goscia_mecz1 *= 1 + ratio*a[20];
		mecze->bezposrednio_strzelone_goscia_mecz1 += ratio*a[22];	
	}
	else
	{
		mecze->bezposrednio_strzelone_goscia_mecz1 *= 1 + ratio*a[21];
		mecze->bezposrednio_strzelone_goscia_mecz1 += ratio*a[23];
	} 
	ratio = mecze->bezposrednio_roznica_ratingow_mecz2 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_goscia_mecz2 *= 1 + ratio*a[20];
		mecze->bezposrednio_strzelone_goscia_mecz2 += ratio*a[22];	
	}
	else
	{
		mecze->bezposrednio_strzelone_goscia_mecz2 *= 1 + ratio*a[21];
		mecze->bezposrednio_strzelone_goscia_mecz2 += ratio*a[23];
	} 
	ratio = mecze->bezposrednio_roznica_ratingow_mecz3 - mecze->roznica_ratingow;
	if (ratio > 0) 
	{
		mecze->bezposrednio_strzelone_goscia_mecz3 *= 1 + ratio*a[20];
		mecze->bezposrednio_strzelone_goscia_mecz3 += ratio*a[22];	
	}
	else
	{
		mecze->bezposrednio_strzelone_goscia_mecz3 *= 1 + ratio*a[21];
		mecze->bezposrednio_strzelone_goscia_mecz3 += ratio*a[23];
	} 
	//stracone gospodarza
	ratio = mecze->roznica_ratingow_gospodarza_mecz1 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->stracone_gospodarza_mecz1 *= 1 + ratio*a[20];
		mecze->stracone_gospodarza_mecz1 += ratio*a[22];
	} 
	else
	{
		mecze->stracone_gospodarza_mecz1 *= 1 + ratio*a[21];
		mecze->stracone_gospodarza_mecz1 += ratio*a[23];
	} 
	ratio = mecze->roznica_ratingow_gospodarza_mecz2 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->stracone_gospodarza_mecz2 *= 1 + ratio*a[20];
		mecze->stracone_gospodarza_mecz2 += ratio*a[22];
	} 
	else
	{
		mecze->stracone_gospodarza_mecz2 *= 1 + ratio*a[21];
		mecze->stracone_gospodarza_mecz2 += ratio*a[23];
	} 
	ratio = mecze->roznica_ratingow_gospodarza_mecz3 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->stracone_gospodarza_mecz3 *= 1 + ratio*a[20];
		mecze->stracone_gospodarza_mecz3 += ratio*a[22];
	} 
	else
	{
		mecze->stracone_gospodarza_mecz3 *= 1 + ratio*a[21];
		mecze->stracone_gospodarza_mecz3 += ratio*a[23];
	} 
	ratio = mecze->roznica_ratingow_gospodarza_mecz4 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->stracone_gospodarza_mecz4 *= 1 + ratio*a[20];
		mecze->stracone_gospodarza_mecz4 += ratio*a[22];
	} 
	else
	{
		mecze->stracone_gospodarza_mecz4 *= 1 + ratio*a[21];
		mecze->stracone_gospodarza_mecz4 += ratio*a[23];
	} 
	ratio = mecze->roznica_ratingow_gospodarza_mecz5 - mecze->roznica_ratingow;
	if (ratio > 0)
	{
		mecze->stracone_gospodarza_mecz5 *= 1 + ratio*a[20];
		mecze->stracone_gospodarza_mecz5 += ratio*a[22];
	} 
	else
	{
		mecze->stracone_gospodarza_mecz5 *= 1 + ratio*a[21];
		mecze->stracone_gospodarza_mecz5 += ratio*a[23];
	} 
	if(mecze->strzelone_goscia_mecz1 < 0) mecze->strzelone_goscia_mecz1 = 0;
	if(mecze->strzelone_goscia_mecz2 < 0) mecze->strzelone_goscia_mecz2 = 0;
	if(mecze->strzelone_goscia_mecz3 < 0) mecze->strzelone_goscia_mecz3 = 0;
	if(mecze->strzelone_goscia_mecz4 < 0) mecze->strzelone_goscia_mecz4 = 0;
	if(mecze->strzelone_goscia_mecz5 < 0) mecze->strzelone_goscia_mecz5 = 0;
	if(mecze->bezposrednio_strzelone_goscia_mecz1 < 0) mecze->bezposrednio_strzelone_goscia_mecz1 = 0;
	if(mecze->bezposrednio_strzelone_goscia_mecz2 < 0) mecze->bezposrednio_strzelone_goscia_mecz2 = 0;
	if(mecze->bezposrednio_strzelone_goscia_mecz3 < 0) mecze->bezposrednio_strzelone_goscia_mecz3 = 0;
	if(mecze->stracone_gospodarza_mecz1 < 0) mecze->stracone_gospodarza_mecz1 = 0;
	if(mecze->stracone_gospodarza_mecz2 < 0) mecze->stracone_gospodarza_mecz2 = 0;
	if(mecze->stracone_gospodarza_mecz3 < 0) mecze->stracone_gospodarza_mecz3 = 0;
	if(mecze->stracone_gospodarza_mecz4 < 0) mecze->stracone_gospodarza_mecz4 = 0;
	if(mecze->stracone_gospodarza_mecz5 < 0) mecze->stracone_gospodarza_mecz5 = 0;
}
float strzelone_gospodarza(float a[40],struct mecz mecze)
{
	przelicz_bramki_gospodarza(a,&mecze);
	float strzelone, strzelone_gospodarza, bezposrednio_strzelone, stracone_goscia;
	strzelone_gospodarza = mecze.strzelone_gospodarza_mecz1*a[4] + mecze.strzelone_gospodarza_mecz2*a[5] + mecze.strzelone_gospodarza_mecz3*a[6] + mecze.strzelone_gospodarza_mecz4*a[7] + mecze.strzelone_gospodarza_mecz5*a[8];
	bezposrednio_strzelone = mecze.bezposrednio_strzelone_gospodarza_mecz1*a[9] + mecze.bezposrednio_strzelone_gospodarza_mecz2*a[10] + mecze.bezposrednio_strzelone_gospodarza_mecz3*a[11];
	stracone_goscia = mecze.stracone_goscia_mecz1*a[12] + mecze.stracone_goscia_mecz2*a[13] + mecze.stracone_goscia_mecz3*a[14] + mecze.stracone_goscia_mecz4*a[15] + mecze.stracone_goscia_mecz5*a[16];
	strzelone = strzelone_gospodarza*a[17] + bezposrednio_strzelone*a[18] + stracone_goscia*a[19];
	return strzelone;
}
float strzelone_goscia(float a[40],struct mecz mecze)
{
	przelicz_bramki_goscia(a,&mecze);
	float strzelone, strzelone_goscia, bezposrednio_strzelone, stracone_gospodarza;
	strzelone_goscia = mecze.strzelone_goscia_mecz1*a[24] + mecze.strzelone_goscia_mecz2*a[25] + mecze.strzelone_goscia_mecz3*a[26] + mecze.strzelone_goscia_mecz4*a[27] + mecze.strzelone_goscia_mecz5*a[28];
	bezposrednio_strzelone = mecze.bezposrednio_strzelone_goscia_mecz1*a[29] + mecze.bezposrednio_strzelone_goscia_mecz2*a[30] + mecze.bezposrednio_strzelone_goscia_mecz3*a[31];
	stracone_gospodarza = mecze.stracone_gospodarza_mecz1*a[32] + mecze.stracone_gospodarza_mecz2*a[33] + mecze.stracone_gospodarza_mecz3*a[34] + mecze.stracone_gospodarza_mecz4*a[35] + mecze.stracone_gospodarza_mecz5*a[36];
	strzelone = strzelone_goscia*a[37] + bezposrednio_strzelone*a[38] + stracone_gospodarza*a[39];
	return strzelone;
}
main()
{
	float wynik_gospodarza, wynik_goscia;
	struct mecz mecze;
	float a[40];
	zapisz_wartosci(a);
	printf("roznica ratingow w przewidywanym meczu (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow);
	printf("ilosc bramek strzelonych przez gospodarza w ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.strzelone_gospodarza_mecz1);
	printf("ilosc bramek straconych przez gospodarza w ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.stracone_gospodarza_mecz1);
	printf("roznica ratingow w ostatnim meczu gospodarza (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow_gospodarza_mecz1);
	printf("ilosc bramek strzelonych przez gospodarza w przedostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.strzelone_gospodarza_mecz2);
	printf("ilosc bramek straconych przez gospodarza w przedostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.stracone_gospodarza_mecz2);
	printf("roznica ratingow w przedostatnim meczu gospodarza (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow_gospodarza_mecz2);
	printf("ilosc bramek strzelonych przez gospodarza w 3 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.strzelone_gospodarza_mecz3);
	printf("ilosc bramek straconych przez gospodarza w 3 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.stracone_gospodarza_mecz3);
	printf("roznica ratingow w 3 ostatnim meczu gospodarza (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow_gospodarza_mecz3);
	printf("ilosc bramek strzelonych przez gospodarza w 4 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.strzelone_gospodarza_mecz4);
	printf("ilosc bramek straconych przez gospodarza w 4 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.stracone_gospodarza_mecz4);
	printf("roznica ratingow w 4 ostatnim meczu gospodarza (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow_gospodarza_mecz4);
	printf("ilosc bramek strzelonych przez gospodarza w 5 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.strzelone_gospodarza_mecz5);
	printf("ilosc bramek straconych przez gospodarza w 5 ostatnim meczu (jako gospodarz):");
	scanf("%f",&mecze.stracone_gospodarza_mecz5);
	printf("roznica ratingow w 5 ostatnim meczu gospodarza (gospodarz - gosc):");
	scanf("%f",&mecze.roznica_ratingow_gospodarza_mecz5);
	printf("ilosc bramek strzelonych przez goscia w ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.strzelone_goscia_mecz1);
	printf("ilosc bramek straconych przez goscia w ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.stracone_goscia_mecz1);
	printf("roznica ratingow w ostatnim meczu goscia(gosc - gospodarz):");
	scanf("%f",&mecze.roznica_ratingow_goscia_mecz1);
	printf("ilosc bramek strzelonych przez goscia w przedostatnim meczu (jako gosc):");
	scanf("%f",&mecze.strzelone_goscia_mecz2);
	printf("ilosc bramek straconych przez goscia w przedostatnim meczu (jako gosc):");
	scanf("%f",&mecze.stracone_goscia_mecz2);
	printf("roznica ratingow w przedostatnim meczu goscia(gosc - gospodarz):");
	scanf("%f",&mecze.roznica_ratingow_goscia_mecz2);
	printf("ilosc bramek strzelonych przez goscia w 3 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.strzelone_goscia_mecz3);
	printf("ilosc bramek straconych przez goscia w 3 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.stracone_goscia_mecz3);
	printf("roznica ratingow w 3 ostatnim meczu goscia(gosc - gospodarz):");
	scanf("%f",&mecze.roznica_ratingow_goscia_mecz3);
	printf("ilosc bramek strzelonych przez goscia w 4 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.strzelone_goscia_mecz4);
	printf("ilosc bramek straconych przez goscia w 4 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.stracone_goscia_mecz4);
	printf("roznica ratingow w 4 ostatnim meczu goscia(gosc - gospodarz):");
	scanf("%f",&mecze.roznica_ratingow_goscia_mecz4);
	printf("ilosc bramek strzelonych przez goscia w 5 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.strzelone_goscia_mecz5);
	printf("ilosc bramek straconych przez goscia w 5 ostatnim meczu (jako gosc):");
	scanf("%f",&mecze.stracone_goscia_mecz5);
	printf("roznica ratingow w 5 ostatnim meczu goscia(gosc - gospodarz):");
	scanf("%f",&mecze.roznica_ratingow_goscia_mecz5);
	printf("ilosc bramek strzelonych przez gospodarza w ostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_gospodarza_mecz1);
	printf("ilosc bramek strzelonych przez goscia w ostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_goscia_mecz1);
	printf("roznica ratingow w ostatnim meczu bezposrednim (gospodarz - gosc):");
	scanf("%f",&mecze.bezposrednio_roznica_ratingow_mecz1);
	printf("ilosc bramek strzelonych przez gospodarza w przedostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_gospodarza_mecz2);
	printf("ilosc bramek strzelonych przez goscia w przedostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_goscia_mecz2);
	printf("roznica ratingow w przedostatnim meczu bezposrednim (gospodarz - gosc):");
	scanf("%f",&mecze.bezposrednio_roznica_ratingow_mecz2);
	printf("ilosc bramek strzelonych przez gospodarza w 3 ostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_gospodarza_mecz3);
	printf("ilosc bramek strzelonych przez goscia w 3 ostatnim bezposrednim pojedynku:");
	scanf("%f",&mecze.bezposrednio_strzelone_goscia_mecz3);
	printf("roznica ratingow w 3 ostatnim meczu bezposrednim (gospodarz - gosc):");
	scanf("%f",&mecze.bezposrednio_roznica_ratingow_mecz3);
	wynik_gospodarza = strzelone_gospodarza(a,mecze);
	wynik_goscia = strzelone_goscia(a,mecze);
	printf("przewidziany wynik: %.3f - %.3f\n",wynik_gospodarza,wynik_goscia);
	//wynik_gospodarza += 0.5;
	//wynik_goscia += 0.5;
	printf("zaokraglony  wynik: %d - %d",(int)wynik_gospodarza,(int)wynik_goscia);
	getchar();
}
