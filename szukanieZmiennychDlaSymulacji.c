#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ilosc_meczy 50 // ilosc meczy która ma byæ wczytana z pliku tekstowego
#define sposob_wyswietlania 1 // 0 - wolniejsze dzia³anie, 1 - szybsze dzia³anie
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
	//wynik w meczu
	int strzelone_gospodarza;
	int strzelone_goscia;
};
void losuj_wartosci(float a[40])
{
	//zmienne do przeliczania goli przez rating
	a[0] = (rand()%20000)/10000.0; // rating > 0
	a[1] = (rand()%20000)/10000.0; // rating < 0
	a[2] = (rand()%20000)/10000.0; // rating > 0
	a[3] = (rand()%20000)/10000.0; // rating < 0
	// suma strzelonch przez gospodarza w 5 ostatnich meczach
	a[4] = (rand()%17000)/100000.0 + 0.25;
	a[5] = (rand()%13000)/100000.0 + 0.25;
	a[6] = (rand()%23000)/100000.0 + 0.15;
	a[7] = (rand()%17000)/100000.0 + 0.13;
	a[8] = (rand()%10000)/100000.0 + 0.02;
	// suma bezposrednio strzelonych przez gospodarza w 3 ostatnich meczach
	a[9] = (rand()%25000)/100000.0 + 0.3;
	a[10] = (rand()%30000)/100000.0 + 0.2;
	a[11] = (rand()%20000)/100000.0 + 0.1;
	// suma straconych przez gosci w 5 ostatnich meczach
	a[12] = (rand()%20000)/100000.0 + 0.25;
	a[13] = (rand()%13000)/100000.0 + 0.25;
	a[14] = (rand()%20000)/100000.0 + 0.15;
	a[15] = (rand()%10000)/100000.0 + 0.15;
	a[16] = (rand()%10000)/100000.0 + 0.05;
	//suma strzelonych gospodarza
	a[17] = (rand()%26000)/100000.0 + 0.2;
	//suma bezposrednio strzelonych gospodarza
	a[18] = (rand()%30000)/100000.0 + 0.2;
	//suma straconych goscia
	a[19] = (rand()%15000)/100000.0 + 0.15;
	//zmienne do przeliczania goli przez rating
	a[20] = (rand()%4000)/1000.0 + 0.3; // rating > 0
	a[21] = (rand()%4000)/1000.0 + 0.3; // rating < 0
	a[22] = (rand()%4000)/1000.0; // rating > 0
	a[23] = (rand()%25000)/10000.0; // rating < 0
	// suma strzelonch przez goscia w 5 ostatnich meczach
	a[24] = (rand()%20000)/100000.0 + 0.2;
	a[25] = (rand()%13000)/100000.0 + 0.25;
	a[26] = (rand()%15000)/100000.0 + 0.15;
	a[27] = (rand()%13000)/100000.0 + 0.15;
	a[28] = (rand()%10000)/100000.0 + 0.05;
	// suma bezposrednio strzelonych przez goscia w 3 ostatnich meczach
	a[29] = (rand()%4000)/10000.0 + 0.35;
	a[30] = (rand()%25000)/100000.0 + 0.2;
	a[31] = (rand()%20000)/100000.0 + 0.1;
	// suma straconych przez gospodarza w 5 ostatnich meczach
	a[32] = (rand()%20000)/100000.0 + 0.25;
	a[33] = (rand()%13000)/100000.0 + 0.25;
	a[34] = (rand()%15000)/100000.0 + 0.2;
	a[35] = (rand()%15000)/100000.0 + 0.1;
	a[36] = (rand()%12000)/100000.0 + 0.05;
	//suma strzelonych goscia
	a[37] = (rand()%20000)/100000.0 + 0.1;
	//suma bezposrednio strzelonych goscia
	a[38] = (rand()%30000)/100000.0 + 0.2;
	//suma straconych gospodarza
	a[39] = (rand()%20000)/100000.0 + 0.1;
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
void wydrukuj_zmienne(float a[40])
{
	int i;
	for(i=0;i<=39;i++) printf("a[%d] = %f\n",i,a[i]);
}
main()
{
	int szukane_dobrze_przewidziane;
	int szukane_zle_przewidziane_bramki;
	int szukane_dobry_wynik;
	int dobrze_przewidziane = 0;
	int zle_przewidziane_bramki = 0;
	int dobry_wynik = 0;
	float wynik_gospodarza, wynik_goscia;
	printf("podaj ilosc szukanych poprawnie przewidzianych meczy (dokladnie):");
	scanf("%d",&szukane_dobrze_przewidziane);
	printf("podaj ilosc szukanych poprawnie przewidzianych meczy (co do wygranej):");
	scanf("%d",&szukane_dobry_wynik);
	printf("podaj maksymalna roznice w bramkach, we wszystkich meczach razem:");
	scanf("%d",&szukane_zle_przewidziane_bramki);
	struct mecz mecze[ilosc_meczy];
	FILE *fp;
	float a[40];
	fp = fopen("mecze2.txt", "r");
	if (fp == NULL)
	{
		printf("nie udalo sie otworzyc pliku");
		getchar();
		return 0;
	}
	int i;
	for(i=0;i<ilosc_meczy;i++)
	{
		fscanf(fp,"%f",&mecze[i].roznica_ratingow);
		fscanf(fp,"%f",&mecze[i].strzelone_gospodarza_mecz1);
		fscanf(fp,"%f",&mecze[i].stracone_gospodarza_mecz1);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_gospodarza_mecz1);
		fscanf(fp,"%f",&mecze[i].strzelone_gospodarza_mecz2);
		fscanf(fp,"%f",&mecze[i].stracone_gospodarza_mecz2);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_gospodarza_mecz2);
		fscanf(fp,"%f",&mecze[i].strzelone_gospodarza_mecz3);
		fscanf(fp,"%f",&mecze[i].stracone_gospodarza_mecz3);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_gospodarza_mecz3);
		fscanf(fp,"%f",&mecze[i].strzelone_gospodarza_mecz4);
		fscanf(fp,"%f",&mecze[i].stracone_gospodarza_mecz4);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_gospodarza_mecz4);
		fscanf(fp,"%f",&mecze[i].strzelone_gospodarza_mecz5);
		fscanf(fp,"%f",&mecze[i].stracone_gospodarza_mecz5);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_gospodarza_mecz5);
		fscanf(fp,"%f",&mecze[i].strzelone_goscia_mecz1);
		fscanf(fp,"%f",&mecze[i].stracone_goscia_mecz1);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_goscia_mecz1);
		fscanf(fp,"%f",&mecze[i].strzelone_goscia_mecz2);
		fscanf(fp,"%f",&mecze[i].stracone_goscia_mecz2);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_goscia_mecz2);
		fscanf(fp,"%f",&mecze[i].strzelone_goscia_mecz3);
		fscanf(fp,"%f",&mecze[i].stracone_goscia_mecz3);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_goscia_mecz3);
		fscanf(fp,"%f",&mecze[i].strzelone_goscia_mecz4);
		fscanf(fp,"%f",&mecze[i].stracone_goscia_mecz4);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_goscia_mecz4);
		fscanf(fp,"%f",&mecze[i].strzelone_goscia_mecz5);
		fscanf(fp,"%f",&mecze[i].stracone_goscia_mecz5);
		fscanf(fp,"%f",&mecze[i].roznica_ratingow_goscia_mecz5);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_gospodarza_mecz1);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_goscia_mecz1);
		fscanf(fp,"%f",&mecze[i].bezposrednio_roznica_ratingow_mecz1);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_gospodarza_mecz2);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_goscia_mecz2);
		fscanf(fp,"%f",&mecze[i].bezposrednio_roznica_ratingow_mecz2);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_gospodarza_mecz3);
		fscanf(fp,"%f",&mecze[i].bezposrednio_strzelone_goscia_mecz3);
		fscanf(fp,"%f",&mecze[i].bezposrednio_roznica_ratingow_mecz3);
		fscanf(fp,"%d",&mecze[i].strzelone_gospodarza);
		fscanf(fp,"%d",&mecze[i].strzelone_goscia);
	}
	fclose(fp);
	srand(time(NULL));
	if (sposob_wyswietlania)
	{
		while(1)
		{
			losuj_wartosci(a);
			for(i=0;i<ilosc_meczy;i++)
			{
				wynik_gospodarza = strzelone_gospodarza(a,mecze[i]);
				wynik_goscia = strzelone_goscia(a,mecze[i]);
				if(((int)wynik_gospodarza == mecze[i].strzelone_gospodarza) && ((int)wynik_goscia == mecze[i].strzelone_goscia))
				{
					dobrze_przewidziane++;
				}
				else
				{
					zle_przewidziane_bramki += abs((int)wynik_gospodarza - mecze[i].strzelone_gospodarza) + abs((int)wynik_goscia - mecze[i].strzelone_goscia);
					if(mecze[i].strzelone_gospodarza == mecze[i].strzelone_goscia && (int)wynik_gospodarza == (int)wynik_goscia)	dobry_wynik++;
					else if(mecze[i].strzelone_gospodarza > mecze[i].strzelone_goscia && (int)wynik_gospodarza > (int)wynik_goscia)	dobry_wynik++;
					else if(mecze[i].strzelone_gospodarza < mecze[i].strzelone_goscia && (int)wynik_gospodarza < (int)wynik_goscia)	dobry_wynik++;
				} 
			}
			if((szukane_dobrze_przewidziane <= dobrze_przewidziane) && (szukane_dobry_wynik <= dobrze_przewidziane + dobry_wynik) && (szukane_zle_przewidziane_bramki >= zle_przewidziane_bramki))
			{
				printf("        gospodarz - gosc\n");
				for(i=0;i<ilosc_meczy;i++)
				{
					wynik_gospodarza = strzelone_gospodarza(a,mecze[i]);
					wynik_goscia = strzelone_goscia(a,mecze[i]);
					printf("poprawny wynik: %d - %d przewidziany wynik: %.3f - %.3f",mecze[i].strzelone_gospodarza,mecze[i].strzelone_goscia,wynik_gospodarza,wynik_goscia);
					if(((int)wynik_gospodarza == mecze[i].strzelone_gospodarza) && ((int)wynik_goscia == mecze[i].strzelone_goscia)) printf("    +\n");
					else if(mecze[i].strzelone_gospodarza == mecze[i].strzelone_goscia && (int)wynik_gospodarza == (int)wynik_goscia)	printf("    /\n");
					else if(mecze[i].strzelone_gospodarza > mecze[i].strzelone_goscia && (int)wynik_gospodarza > (int)wynik_goscia)	printf("    /\n");
					else if(mecze[i].strzelone_gospodarza < mecze[i].strzelone_goscia && (int)wynik_gospodarza < (int)wynik_goscia)	printf("    /\n");
					else printf("\n");
				} 
				printf("\nznaleziono wartosci ktore przewidzialy dokladnie meczy: %d\n",dobrze_przewidziane);
				printf("znaleziono wartosci ktore przewidzialy ogolnie meczy: %d\n",dobrze_przewidziane + dobry_wynik);
				printf("w zle przewidzianych bramkach pomylono sie o bramek: %d\n",zle_przewidziane_bramki);
				wydrukuj_zmienne(a);
				printf("podaj ilosc szukanych poprawnie przewidzianych meczy (dokladnie):");
				scanf("%d",&szukane_dobrze_przewidziane);
				printf("podaj ilosc szukanych poprawnie przewidzianych meczy (co do wygranej):");
				scanf("%d",&szukane_dobry_wynik);
				printf("podaj maksymalna roznice w bramkach, we wszystkich meczach razem:");
				scanf("%d",&szukane_zle_przewidziane_bramki);
				dobrze_przewidziane = 0;
				dobry_wynik = 0;
				zle_przewidziane_bramki = 0;
			}
			else 
			{
				dobrze_przewidziane = 0;
				dobry_wynik = 0;
				zle_przewidziane_bramki = 0;
			}
		}
	}
	else
	{
		while(1)
		{
			losuj_wartosci(a);
			printf("        gospodarz - gosc\n");
			for(i=0;i<ilosc_meczy;i++)
			{
				wynik_gospodarza = strzelone_gospodarza(a,mecze[i]);
				wynik_goscia = strzelone_goscia(a,mecze[i]);
				printf("poprawny wynik: %d - %d przewidziany wynik: %.3f - %.3f",mecze[i].strzelone_gospodarza,mecze[i].strzelone_goscia,wynik_gospodarza,wynik_goscia);
				//wynik_gospodarza += 0.5;
				//wynik_goscia += 0.5;
				if(((int)wynik_gospodarza == mecze[i].strzelone_gospodarza) && ((int)wynik_goscia == mecze[i].strzelone_goscia))
				{
					dobrze_przewidziane++;
					printf("    +\n");
				}
				else
				{
					zle_przewidziane_bramki += abs((int)wynik_gospodarza - mecze[i].strzelone_gospodarza) + abs((int)wynik_goscia - mecze[i].strzelone_goscia);
					if(mecze[i].strzelone_gospodarza == mecze[i].strzelone_goscia && (int)wynik_gospodarza == (int)wynik_goscia)
					{
						printf("    /\n");
						dobry_wynik++;
					}
					else if(mecze[i].strzelone_gospodarza > mecze[i].strzelone_goscia && (int)wynik_gospodarza > (int)wynik_goscia)
					{
						printf("    /\n");
						dobry_wynik++;
					}
					else if(mecze[i].strzelone_gospodarza < mecze[i].strzelone_goscia && (int)wynik_gospodarza < (int)wynik_goscia)
					{
						printf("    /\n");
						dobry_wynik++;
					}
					else printf("\n");
				} 
			}
			if((szukane_dobrze_przewidziane <= dobrze_przewidziane) && (szukane_dobry_wynik <= dobrze_przewidziane + dobry_wynik) && (szukane_zle_przewidziane_bramki >= zle_przewidziane_bramki))
			{
				printf("\nznaleziono wartosci ktore przewidzialy dokladnie meczy: %d\n",dobrze_przewidziane);
				printf("znaleziono wartosci ktore przewidzialy ogolnie meczy: %d\n",dobrze_przewidziane + dobry_wynik);
				printf("w zle przewidzianych bramkach pomylono sie o bramek: %d\n",zle_przewidziane_bramki);
				wydrukuj_zmienne(a);
				printf("podaj ilosc szukanych poprawnie przewidzianych meczy (dokladnie):");
				scanf("%d",&szukane_dobrze_przewidziane);
				printf("podaj ilosc szukanych poprawnie przewidzianych meczy (co do wygranej):");
				scanf("%d",&szukane_dobry_wynik);
				printf("podaj maksymalna roznice w bramkach, we wszystkich meczach razem:");
				scanf("%d",&szukane_zle_przewidziane_bramki);
				dobrze_przewidziane = 0;
				dobry_wynik = 0;
				zle_przewidziane_bramki = 0;
			}
			else 
			{
				system("cls");
				dobrze_przewidziane = 0;
				dobry_wynik = 0;
				zle_przewidziane_bramki = 0;
	
			}
		}
	}
}
