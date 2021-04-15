from tkinter import *
from tkinter import Entry

class mecz:
    def przelicz_bramki_gospodarza(self, a):
        #strzelone przez gospodarza
        ratio = self.roznica_ratingow_gospodarza_mecz1 - self.roznica_ratingow
        if ratio > 0:

            self.strzelone_gospodarza_mecz1 *= 1 - ratio * a[0]
            self.strzelone_gospodarza_mecz1 -= ratio * a[2]

        else:

            self.strzelone_gospodarza_mecz1 *= 1 - ratio * a[1]
            self.strzelone_gospodarza_mecz1 -= ratio * a[3]

        ratio = self.roznica_ratingow_gospodarza_mecz2 - self.roznica_ratingow
        if ratio > 0:

            self.strzelone_gospodarza_mecz2 *= 1 - ratio * a[0]
            self.strzelone_gospodarza_mecz2 -= ratio * a[2]

        else:

            self.strzelone_gospodarza_mecz2 *= 1 - ratio * a[1]
            self.strzelone_gospodarza_mecz2 -= ratio * a[3]

        ratio = self.roznica_ratingow_gospodarza_mecz3 - self.roznica_ratingow
        if ratio > 0:

            self.strzelone_gospodarza_mecz3 *= 1 - ratio * a[0]
            self.strzelone_gospodarza_mecz3 -= ratio * a[2]

        else:

            self.strzelone_gospodarza_mecz3 *= 1 - ratio * a[1]
            self.strzelone_gospodarza_mecz3 -= ratio * a[3]

        ratio = self.roznica_ratingow_gospodarza_mecz4 - self.roznica_ratingow
        if ratio > 0:

            self.strzelone_gospodarza_mecz4 *= 1 - ratio * a[0]
            self.strzelone_gospodarza_mecz4 -= ratio * a[2]

        else:

            self.strzelone_gospodarza_mecz4 *= 1 - ratio * a[1]
            self.strzelone_gospodarza_mecz4 -= ratio * a[3]

        ratio = self.roznica_ratingow_gospodarza_mecz5 - self.roznica_ratingow
        if ratio > 0:

            self.strzelone_gospodarza_mecz5 *= 1 - ratio * a[0]
            self.strzelone_gospodarza_mecz5 -= ratio * a[2]

        else:

            self.strzelone_gospodarza_mecz5 *= 1 - ratio * a[1]
            self.strzelone_gospodarza_mecz5 -= ratio * a[3]

        # bezposrednio strzelone przez gospodarza
        ratio = self.bezposrednio_roznica_ratingow_mecz1 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_gospodarza_mecz1 *= 1 - ratio * a[0]
            self.bezposrednio_strzelone_gospodarza_mecz1 -= ratio * a[2]

        else:

            self.bezposrednio_strzelone_gospodarza_mecz1 *= 1 - ratio * a[1]
            self.bezposrednio_strzelone_gospodarza_mecz1 -= ratio * a[3]

        ratio = self.bezposrednio_roznica_ratingow_mecz2 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_gospodarza_mecz2 *= 1 - ratio * a[0]
            self.bezposrednio_strzelone_gospodarza_mecz2 -= ratio * a[2]

        else:

            self.bezposrednio_strzelone_gospodarza_mecz2 *= 1 - ratio * a[1]
            self.bezposrednio_strzelone_gospodarza_mecz2 -= ratio * a[3]

        ratio = self.bezposrednio_roznica_ratingow_mecz3 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_gospodarza_mecz3 *= 1 - ratio * a[0]
            self.bezposrednio_strzelone_gospodarza_mecz3 -= ratio * a[2]

        else:

            self.bezposrednio_strzelone_gospodarza_mecz3 *= 1 - ratio * a[1]
            self.bezposrednio_strzelone_gospodarza_mecz3 -= ratio * a[3]

        # stracone gosci
        ratio = self.roznica_ratingow_goscia_mecz1 + self.roznica_ratingow
        if ratio > 0:

            self.stracone_goscia_mecz1 *= 1 + ratio * a[0]
            self.stracone_goscia_mecz1 += ratio * a[2]

        else:

            self.stracone_goscia_mecz1 *= 1 + ratio * a[1]
            self.stracone_goscia_mecz1 += ratio * a[3]

        ratio = self.roznica_ratingow_goscia_mecz2 + self.roznica_ratingow
        if ratio > 0:

            self.stracone_goscia_mecz2 *= 1 + ratio * a[0]
            self.stracone_goscia_mecz2 += ratio * a[2]

        else:

            self.stracone_goscia_mecz2 *= 1 + ratio * a[1]
            self.stracone_goscia_mecz2 += ratio * a[3]

        ratio = self.roznica_ratingow_goscia_mecz3 + self.roznica_ratingow
        if ratio > 0:

            self.stracone_goscia_mecz3 *= 1 + ratio * a[0]
            self.stracone_goscia_mecz3 += ratio * a[2]

        else:

            self.stracone_goscia_mecz3 *= 1 + ratio * a[1]
            self.stracone_goscia_mecz3 += ratio * a[3]

        ratio = self.roznica_ratingow_goscia_mecz4 + self.roznica_ratingow
        if ratio > 0:

            self.stracone_goscia_mecz4 *= 1 + ratio * a[0]
            self.stracone_goscia_mecz4 += ratio * a[2]

        else:

            self.stracone_goscia_mecz4 *= 1 + ratio * a[1]
            self.stracone_goscia_mecz4 += ratio * a[3]

        ratio = self.roznica_ratingow_goscia_mecz5 + self.roznica_ratingow
        if ratio > 0:

            self.stracone_goscia_mecz5 *= 1 + ratio * a[0]
            self.stracone_goscia_mecz5 += ratio * a[2]

        else:

            self.stracone_goscia_mecz5 *= 1 + ratio * a[1]
            self.stracone_goscia_mecz5 += ratio * a[3]

        if self.strzelone_gospodarza_mecz1 < 0: self.strzelone_gospodarza_mecz1 = 0
        if self.strzelone_gospodarza_mecz2 < 0: self.strzelone_gospodarza_mecz2 = 0
        if self.strzelone_gospodarza_mecz3 < 0: self.strzelone_gospodarza_mecz3 = 0
        if self.strzelone_gospodarza_mecz4 < 0: self.strzelone_gospodarza_mecz4 = 0
        if self.strzelone_gospodarza_mecz5 < 0: self.strzelone_gospodarza_mecz5 = 0
        if self.bezposrednio_strzelone_gospodarza_mecz1 < 0: self.bezposrednio_strzelone_gospodarza_mecz1 = 0
        if self.bezposrednio_strzelone_gospodarza_mecz2 < 0: self.bezposrednio_strzelone_gospodarza_mecz2 = 0
        if self.bezposrednio_strzelone_gospodarza_mecz3 < 0: self.bezposrednio_strzelone_gospodarza_mecz3 = 0
        if self.stracone_goscia_mecz1 < 0: self.stracone_goscia_mecz1 = 0
        if self.stracone_goscia_mecz2 < 0: self.stracone_goscia_mecz2 = 0
        if self.stracone_goscia_mecz3 < 0: self.stracone_goscia_mecz3 = 0
        if self.stracone_goscia_mecz4 < 0: self.stracone_goscia_mecz4 = 0
        if self.stracone_goscia_mecz5 < 0: self.stracone_goscia_mecz5 = 0


    def przelicz_bramki_goscia(self,a):
        # strzelone przez goscia
        ratio = self.roznica_ratingow_goscia_mecz1 + self.roznica_ratingow
        if ratio > 0:

            self.strzelone_goscia_mecz1 *= 1 - ratio * a[20]
            self.strzelone_goscia_mecz1 -= ratio * a[22]

        else:

            self.strzelone_goscia_mecz1 *= 1 - ratio * a[21]
            self.strzelone_goscia_mecz1 -= ratio * a[23]

        ratio = self.roznica_ratingow_goscia_mecz2 + self.roznica_ratingow
        if ratio > 0:

            self.strzelone_goscia_mecz2 *= 1 - ratio * a[20]
            self.strzelone_goscia_mecz2 -= ratio * a[22]

        else:

            self.strzelone_goscia_mecz2 *= 1 - ratio * a[21]
            self.strzelone_goscia_mecz2 -= ratio * a[23]

        ratio = self.roznica_ratingow_goscia_mecz3 + self.roznica_ratingow
        if ratio > 0:

            self.strzelone_goscia_mecz3 *= 1 - ratio * a[20]
            self.strzelone_goscia_mecz3 -= ratio * a[22]

        else:

            self.strzelone_goscia_mecz3 *= 1 - ratio * a[21]
            self.strzelone_goscia_mecz3 -= ratio * a[23]

        ratio = self.roznica_ratingow_goscia_mecz4 + self.roznica_ratingow
        if ratio > 0:

            self.strzelone_goscia_mecz4 *= 1 - ratio * a[20]
            self.strzelone_goscia_mecz4 -= ratio * a[22]

        else:

            self.strzelone_goscia_mecz4 *= 1 - ratio * a[21]
            self.strzelone_goscia_mecz4 -= ratio * a[23]

        ratio = self.roznica_ratingow_goscia_mecz5 + self.roznica_ratingow
        if ratio > 0:

            self.strzelone_goscia_mecz5 *= 1 - ratio * a[20]
            self.strzelone_goscia_mecz5 -= ratio * a[22]

        else:

            self.strzelone_goscia_mecz5 *= 1 - ratio * a[21]
            self.strzelone_goscia_mecz5 -= ratio * a[23]

        # bezposrednio strzelone przez goscia
        ratio = self.bezposrednio_roznica_ratingow_mecz1 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_goscia_mecz1 *= 1 + ratio * a[20]
            self.bezposrednio_strzelone_goscia_mecz1 += ratio * a[22]

        else:

            self.bezposrednio_strzelone_goscia_mecz1 *= 1 + ratio * a[21]
            self.bezposrednio_strzelone_goscia_mecz1 += ratio * a[23]

        ratio = self.bezposrednio_roznica_ratingow_mecz2 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_goscia_mecz2 *= 1 + ratio * a[20]
            self.bezposrednio_strzelone_goscia_mecz2 += ratio * a[22]

        else:

            self.bezposrednio_strzelone_goscia_mecz2 *= 1 + ratio * a[21]
            self.bezposrednio_strzelone_goscia_mecz2 += ratio * a[23]

        ratio = self.bezposrednio_roznica_ratingow_mecz3 - self.roznica_ratingow
        if ratio > 0:

            self.bezposrednio_strzelone_goscia_mecz3 *= 1 + ratio * a[20]
            self.bezposrednio_strzelone_goscia_mecz3 += ratio * a[22]

        else:

            self.bezposrednio_strzelone_goscia_mecz3 *= 1 + ratio * a[21]
            self.bezposrednio_strzelone_goscia_mecz3 += ratio * a[23]

        # stracone gospodarza
        ratio = self.roznica_ratingow_gospodarza_mecz1 - self.roznica_ratingow
        if ratio > 0:

            self.stracone_gospodarza_mecz1 *= 1 + ratio * a[20]
            self.stracone_gospodarza_mecz1 += ratio * a[22]

        else:

            self.stracone_gospodarza_mecz1 *= 1 + ratio * a[21]
            self.stracone_gospodarza_mecz1 += ratio * a[23]

        ratio = self.roznica_ratingow_gospodarza_mecz2 - self.roznica_ratingow
        if ratio > 0:

            self.stracone_gospodarza_mecz2 *= 1 + ratio * a[20]
            self.stracone_gospodarza_mecz2 += ratio * a[22]

        else:

            self.stracone_gospodarza_mecz2 *= 1 + ratio * a[21]
            self.stracone_gospodarza_mecz2 += ratio * a[23]

        ratio = self.roznica_ratingow_gospodarza_mecz3 - self.roznica_ratingow
        if ratio > 0:

            self.stracone_gospodarza_mecz3 *= 1 + ratio * a[20]
            self.stracone_gospodarza_mecz3 += ratio * a[22]

        else:

            self.stracone_gospodarza_mecz3 *= 1 + ratio * a[21]
            self.stracone_gospodarza_mecz3 += ratio * a[23]

        ratio = self.roznica_ratingow_gospodarza_mecz4 - self.roznica_ratingow
        if ratio > 0:

            self.stracone_gospodarza_mecz4 *= 1 + ratio * a[20]
            self.stracone_gospodarza_mecz4 += ratio * a[22]

        else:

            self.stracone_gospodarza_mecz4 *= 1 + ratio * a[21]
            self.stracone_gospodarza_mecz4 += ratio * a[23]

        ratio = self.roznica_ratingow_gospodarza_mecz5 - self.roznica_ratingow
        if ratio > 0:

            self.stracone_gospodarza_mecz5 *= 1 + ratio * a[20]
            self.stracone_gospodarza_mecz5 += ratio * a[22]

        else:

            self.stracone_gospodarza_mecz5 *= 1 + ratio * a[21]
            self.stracone_gospodarza_mecz5 += ratio * a[23]

        if self.strzelone_goscia_mecz1 < 0: self.strzelone_goscia_mecz1 = 0
        if self.strzelone_goscia_mecz2 < 0: self.strzelone_goscia_mecz2 = 0
        if self.strzelone_goscia_mecz3 < 0: self.strzelone_goscia_mecz3 = 0
        if self.strzelone_goscia_mecz4 < 0: self.strzelone_goscia_mecz4 = 0
        if self.strzelone_goscia_mecz5 < 0: self.strzelone_goscia_mecz5 = 0
        if self.bezposrednio_strzelone_goscia_mecz1 < 0: self.bezposrednio_strzelone_goscia_mecz1 = 0
        if self.bezposrednio_strzelone_goscia_mecz2 < 0: self.bezposrednio_strzelone_goscia_mecz2 = 0
        if self.bezposrednio_strzelone_goscia_mecz3 < 0: self.bezposrednio_strzelone_goscia_mecz3 = 0
        if self.stracone_gospodarza_mecz1 < 0: self.stracone_gospodarza_mecz1 = 0
        if self.stracone_gospodarza_mecz2 < 0: self.stracone_gospodarza_mecz2 = 0
        if self.stracone_gospodarza_mecz3 < 0: self.stracone_gospodarza_mecz3 = 0
        if self.stracone_gospodarza_mecz4 < 0: self.stracone_gospodarza_mecz4 = 0
        if self.stracone_gospodarza_mecz5 < 0: self.stracone_gospodarza_mecz5 = 0

    def strzelone_gospodarza(self, a):
        self.przelicz_bramki_gospodarza(a)
        strzelone_gospodarza = self.strzelone_gospodarza_mecz1*a[4] + self.strzelone_gospodarza_mecz2*a[5] + self.strzelone_gospodarza_mecz3*a[6] + self.strzelone_gospodarza_mecz4*a[7] + self.strzelone_gospodarza_mecz5*a[8]
        bezposrednio_strzelone = self.bezposrednio_strzelone_gospodarza_mecz1*a[9] + self.bezposrednio_strzelone_gospodarza_mecz2*a[10] + self.bezposrednio_strzelone_gospodarza_mecz3*a[11]
        stracone_goscia = self.stracone_goscia_mecz1*a[12] + self.stracone_goscia_mecz2*a[13] + self.stracone_goscia_mecz3*a[14] + self.stracone_goscia_mecz4*a[15] + self.stracone_goscia_mecz5*a[16]
        strzelone = strzelone_gospodarza*a[17] + bezposrednio_strzelone*a[18] + stracone_goscia*a[19]
        return strzelone


    def strzelone_goscia(self, a):
        self.przelicz_bramki_goscia(a)
        strzelone_goscia = self.strzelone_goscia_mecz1*a[24] + self.strzelone_goscia_mecz2*a[25] + self.strzelone_goscia_mecz3*a[26] + self.strzelone_goscia_mecz4*a[27] + self.strzelone_goscia_mecz5*a[28]
        bezposrednio_strzelone = self.bezposrednio_strzelone_goscia_mecz1 * a[29] + self.bezposrednio_strzelone_goscia_mecz2 * a[30] + self.bezposrednio_strzelone_goscia_mecz3 * a[31]
        stracone_gospodarza = self.stracone_gospodarza_mecz1 * a[32] + self.stracone_gospodarza_mecz2 * a[33] + self.stracone_gospodarza_mecz3 * a[34] + self.stracone_gospodarza_mecz4 * a[35] + self.stracone_gospodarza_mecz5 * a[36]
        strzelone = strzelone_goscia * a[37] + bezposrednio_strzelone * a[38] + stracone_gospodarza * a[39]
        return strzelone

def ustaw_zmienne(a):
    a[0] = 0.006200
    a[1] = 0.326400
    a[2] = 0.226900
    a[3] = 1.428300
    a[4] = 0.347910
    a[5] = 0.253170
    a[6] = 0.224470
    a[7] = 0.285650
    a[8] = 0.094960
    a[9] = 0.308110
    a[10] = 0.471210
    a[11] = 0.187200
    a[12] = 0.341360
    a[13] = 0.336760
    a[14] = 0.187040
    a[15] = 0.193190
    a[16] = 0.091670
    a[17] = 0.208110
    a[18] = 0.430650
    a[19] = 0.229250
    a[20] = 1.986000
    a[21] = 0.902000
    a[22] = 2.273000
    a[23] = 1.126800
    a[24] = 0.250310
    a[25] = 0.274360
    a[26] = 0.199300
    a[27] = 0.183230
    a[28] = 0.148230
    a[29] = 0.565600
    a[30] = 0.278970
    a[31] = 0.210230
    a[32] = 0.313440
    a[33] = 0.309020
    a[34] = 0.294940
    a[35] = 0.125820
    a[36] = 0.089720
    a[37] = 0.230530
    a[38] = 0.303000
    a[39] = 0.208960

def wylicz():
    mecze = mecz()
    a = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    ustaw_zmienne(a)
    mecze.roznica_ratingow = float(entry1.get())
    mecze.strzelone_gospodarza_mecz1 = float(entry2.get())
    mecze.stracone_gospodarza_mecz1 = float(entry3.get())
    mecze.roznica_ratingow_gospodarza_mecz1 = float(entry4.get())
    mecze.strzelone_gospodarza_mecz2 = float(entry5.get())
    mecze.stracone_gospodarza_mecz2 = float(entry6.get())
    mecze.roznica_ratingow_gospodarza_mecz2 = float(entry7.get())
    mecze.strzelone_gospodarza_mecz3 = float(entry8.get())
    mecze.stracone_gospodarza_mecz3 = float(entry9.get())
    mecze.roznica_ratingow_gospodarza_mecz3 = float(entry10.get())
    mecze.strzelone_gospodarza_mecz4 = float(entry11.get())
    mecze.stracone_gospodarza_mecz4 = float(entry12.get())
    mecze.roznica_ratingow_gospodarza_mecz4 = float(entry13.get())
    mecze.strzelone_gospodarza_mecz5 = float(entry14.get())
    mecze.stracone_gospodarza_mecz5 = float(entry15.get())
    mecze.roznica_ratingow_gospodarza_mecz5 = float(entry16.get())
    mecze.strzelone_goscia_mecz1 = float(entry17.get())
    mecze.stracone_goscia_mecz1 = float(entry18.get())
    mecze.roznica_ratingow_goscia_mecz1 = float(entry19.get())
    mecze.strzelone_goscia_mecz2 = float(entry20.get())
    mecze.stracone_goscia_mecz2 = float(entry21.get())
    mecze.roznica_ratingow_goscia_mecz2 = float(entry22.get())
    mecze.strzelone_goscia_mecz3 = float(entry23.get())
    mecze.stracone_goscia_mecz3 = float(entry24.get())
    mecze.roznica_ratingow_goscia_mecz3 = float(entry25.get())
    mecze.strzelone_goscia_mecz4 = float(entry26.get())
    mecze.stracone_goscia_mecz4 = float(entry27.get())
    mecze.roznica_ratingow_goscia_mecz4 = float(entry28.get())
    mecze.strzelone_goscia_mecz5 = float(entry29.get())
    mecze.stracone_goscia_mecz5 = float(entry30.get())
    mecze.roznica_ratingow_goscia_mecz5 = float(entry31.get())
    mecze.bezposrednio_strzelone_gospodarza_mecz1 = float(entry32.get())
    mecze.bezposrednio_strzelone_goscia_mecz1 = float(entry33.get())
    mecze.bezposrednio_roznica_ratingow_mecz1 = float(entry34.get())
    mecze.bezposrednio_strzelone_gospodarza_mecz2 = float(entry35.get())
    mecze.bezposrednio_strzelone_goscia_mecz2 = float(entry36.get())
    mecze.bezposrednio_roznica_ratingow_mecz2 = float(entry37.get())
    mecze.bezposrednio_strzelone_gospodarza_mecz3 = float(entry38.get())
    mecze.bezposrednio_strzelone_goscia_mecz3 = float(entry39.get())
    mecze.bezposrednio_roznica_ratingow_mecz3 = float(entry40.get())
    wynik_gospodarza = mecze.strzelone_gospodarza(a)
    wynik_goscia = mecze.strzelone_goscia(a)
    output1.delete(0.0, END)
    output2.delete(0.0, END)
    output3.delete(0.0, END)
    output4.delete(0.0, END)
    output1.insert(END, round(wynik_gospodarza, 3))
    output2.insert(END, round(wynik_goscia, 3))
    output3.insert(END, int(wynik_gospodarza))
    output4.insert(END, int(wynik_goscia))


def clear():
    entry1.delete(0, 'end')
    entry2.delete(0, 'end')
    entry3.delete(0, 'end')
    entry4.delete(0, 'end')
    entry5.delete(0, 'end')
    entry6.delete(0, 'end')
    entry7.delete(0, 'end')
    entry8.delete(0, 'end')
    entry9.delete(0, 'end')
    entry10.delete(0, 'end')
    entry11.delete(0, 'end')
    entry12.delete(0, 'end')
    entry13.delete(0, 'end')
    entry14.delete(0, 'end')
    entry15.delete(0, 'end')
    entry16.delete(0, 'end')
    entry17.delete(0, 'end')
    entry18.delete(0, 'end')
    entry19.delete(0, 'end')
    entry20.delete(0, 'end')
    entry21.delete(0, 'end')
    entry22.delete(0, 'end')
    entry23.delete(0, 'end')
    entry24.delete(0, 'end')
    entry25.delete(0, 'end')
    entry26.delete(0, 'end')
    entry27.delete(0, 'end')
    entry28.delete(0, 'end')
    entry29.delete(0, 'end')
    entry30.delete(0, 'end')
    entry31.delete(0, 'end')
    entry32.delete(0, 'end')
    entry33.delete(0, 'end')
    entry34.delete(0, 'end')
    entry35.delete(0, 'end')
    entry36.delete(0, 'end')
    entry37.delete(0, 'end')
    entry38.delete(0, 'end')
    entry39.delete(0, 'end')
    entry40.delete(0, 'end')



window = Tk()
window.title("przewidywanie meczy")
window.configure(background="#17F8E3")
Label(window, text = "  raitingi nalezy brac ze strony: www.whoscored.com", bg = "#17F8E3", font = "none 12") .grid(row=0, column=2, sticky='w')
Label(window, text = "roznica ratingow w przewidywanym meczu (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=0, column=0, sticky='w')
entry1 = Entry(window, width=5, bg="white")
entry1.grid(row=0, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=1, column=0, sticky='w')
entry2 = Entry(window, width=5, bg="white")
entry2.grid(row=1, column=1, sticky='w')
Label(window, text = "ilosc bramek straconych przez gospodarza w ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=2, column=0, sticky='w')
entry3 = Entry(window, width=5, bg="white")
entry3.grid(row=2, column=1, sticky='w')
Label(window, text = "roznica ratingow w ostatnim meczu gospodarza (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=3, column=0, sticky='w')
entry4 = Entry(window, width=5, bg="white")
entry4.grid(row=3, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w przedostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=4, column=0, sticky='w')
entry5 = Entry(window, width=5, bg="white")
entry5.grid(row=4, column=1, sticky='w')
Label(window, text = "ilosc bramek straconych przez gospodarza w przedostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=5, column=0, sticky='w')
entry6 = Entry(window, width=5, bg="white")
entry6.grid(row=5, column=1, sticky='w')
Label(window, text = "roznica ratingow w przedostatnim meczu gospodarza (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=6, column=0, sticky='w')
entry7 = Entry(window, width=5, bg="white")
entry7.grid(row=6, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w 3 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=7, column=0, sticky='w')
entry8 = Entry(window, width=5, bg="white")
entry8.grid(row=7, column=1, sticky='w')
Label(window, text = "ilosc bramek straconych przez gospodarza w 3 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=8, column=0, sticky='w')
entry9 = Entry(window, width=5, bg="white")
entry9.grid(row=8, column=1, sticky='w')
Label(window, text = "roznica ratingow w 3 ostatnim meczu gospodarza (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=9, column=0, sticky='w')
entry10 = Entry(window, width=5, bg="white")
entry10.grid(row=9, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w 4 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=10, column=0, sticky='w')
entry11 = Entry(window, width=5, bg="white")
entry11.grid(row=10, column=1, sticky='w')
Label(window, text = "ilosc bramek straconych przez gospodarza w 4 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=11, column=0, sticky='w')
entry12 = Entry(window, width=5, bg="white")
entry12.grid(row=11, column=1, sticky='w')
Label(window, text = "roznica ratingow w 4 ostatnim meczu gospodarza (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=12, column=0, sticky='w')
entry13 = Entry(window, width=5, bg="white")
entry13.grid(row=12, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w 5 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=13, column=0, sticky='w')
entry14 = Entry(window, width=5, bg="white")
entry14.grid(row=13, column=1, sticky='w')
Label(window, text = "ilosc bramek straconych przez gospodarza w 5 ostatnim meczu (jako gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=14, column=0, sticky='w')
entry15 = Entry(window, width=5, bg="white")
entry15.grid(row=14, column=1, sticky='w')
Label(window, text = "roznica ratingow w 5 ostatnim meczu gospodarza (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=15, column=0, sticky='w')
entry16 = Entry(window, width=5, bg="white")
entry16.grid(row=15, column=1, sticky='w')

Label(window, text = "  ilosc bramek strzelonych przez goscia w ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=1, column=2, sticky='w')
entry17 = Entry(window, width=5, bg="white")
entry17.grid(row=1, column=3, sticky='w')
Label(window, text = "  ilosc bramek straconych przez goscia w ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=2, column=2, sticky='w')
entry18 = Entry(window, width=5, bg="white")
entry18.grid(row=2, column=3, sticky='w')
Label(window, text = "  roznica ratingow w ostatnim meczu goscia (gosc - gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=3, column=2, sticky='w')
entry19 = Entry(window, width=5, bg="white")
entry19.grid(row=3, column=3, sticky='w')
Label(window, text = "  ilosc bramek strzelonych przez goscia w przedostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=4, column=2, sticky='w')
entry20 = Entry(window, width=5, bg="white")
entry20.grid(row=4, column=3, sticky='w')
Label(window, text = "  ilosc bramek straconych przez goscia w przedostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=5, column=2, sticky='w')
entry21 = Entry(window, width=5, bg="white")
entry21.grid(row=5, column=3, sticky='w')
Label(window, text = "  roznica ratingow w przedostatnim meczu goscia (gosc - gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=6, column=2, sticky='w')
entry22 = Entry(window, width=5, bg="white")
entry22.grid(row=6, column=3, sticky='w')
Label(window, text = "  ilosc bramek strzelonych przez goscia w 3 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=7, column=2, sticky='w')
entry23 = Entry(window, width=5, bg="white")
entry23.grid(row=7, column=3, sticky='w')
Label(window, text = "  ilosc bramek straconych przez goscia w 3 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=8, column=2, sticky='w')
entry24 = Entry(window, width=5, bg="white")
entry24.grid(row=8, column=3, sticky='w')
Label(window, text = "  roznica ratingow w 3 ostatnim meczu goscia (gosc - gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=9, column=2, sticky='w')
entry25 = Entry(window, width=5, bg="white")
entry25.grid(row=9, column=3, sticky='w')
Label(window, text = "  ilosc bramek strzelonych przez goscia w 4 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=10, column=2, sticky='w')
entry26 = Entry(window, width=5, bg="white")
entry26.grid(row=10, column=3, sticky='w')
Label(window, text = "  ilosc bramek straconych przez goscia w 4 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=11, column=2, sticky='w')
entry27 = Entry(window, width=5, bg="white")
entry27.grid(row=11, column=3, sticky='w')
Label(window, text = "  roznica ratingow w 4 ostatnim meczu goscia (gosc - gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=12, column=2, sticky='w')
entry28 = Entry(window, width=5, bg="white")
entry28.grid(row=12, column=3, sticky='w')
Label(window, text = "  ilosc bramek strzelonych przez goscia w 5 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=13, column=2, sticky='w')
entry29 = Entry(window, width=5, bg="white")
entry29.grid(row=13, column=3, sticky='w')
Label(window, text = "  ilosc bramek straconych przez goscia w 5 ostatnim meczu (jako gosc):", bg = "#17F8E3", font = "none 12") .grid(row=14, column=2, sticky='w')
entry30 = Entry(window, width=5, bg="white")
entry30.grid(row=14, column=3, sticky='w')
Label(window, text = "  roznica ratingow w 5 ostatnim meczu goscia (gosc - gospodarz):", bg = "#17F8E3", font = "none 12") .grid(row=15, column=2, sticky='w')
entry31 = Entry(window, width=5, bg="white")
entry31.grid(row=15, column=3, sticky='w')

Label(window, text = "ilosc bramek strzelonych przez gospodarza w ostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=16, column=0, sticky='w')
entry32 = Entry(window, width=5, bg="white")
entry32.grid(row=16, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez goscia w ostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=17, column=0, sticky='w')
entry33 = Entry(window, width=5, bg="white")
entry33.grid(row=17, column=1, sticky='w')
Label(window, text = "roznica ratingow w ostatnim meczu bezposrednim (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=18, column=0, sticky='w')
entry34 = Entry(window, width=5, bg="white")
entry34.grid(row=18, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w przedostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=19, column=0, sticky='w')
entry35 = Entry(window, width=5, bg="white")
entry35.grid(row=19, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez goscia w przedostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=20, column=0, sticky='w')
entry36 = Entry(window, width=5, bg="white")
entry36.grid(row=20, column=1, sticky='w')
Label(window, text = "roznica ratingow w przedostatnim meczu bezposrednim (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=21, column=0, sticky='w')
entry37 = Entry(window, width=5, bg="white")
entry37.grid(row=21, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez gospodarza w 3 ostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=22, column=0, sticky='w')
entry38 = Entry(window, width=5, bg="white")
entry38.grid(row=22, column=1, sticky='w')
Label(window, text = "ilosc bramek strzelonych przez goscia w 3 ostatnim bezposrednim pojedynku:", bg = "#17F8E3", font = "none 12") .grid(row=23, column=0, sticky='w')
entry39 = Entry(window, width=5, bg="white")
entry39.grid(row=23, column=1, sticky='w')
Label(window, text = "roznica ratingow w 3 ostatnim meczu bezposrednim (gospodarz - gosc):", bg = "#17F8E3", font = "none 12") .grid(row=24, column=0, sticky='w')
entry40 = Entry(window, width=5, bg="white")
entry40.grid(row=24, column=1, sticky='w')

Button(window, text="wylicz", width=6, command=wylicz) .grid(row=17, column=4, sticky='w')
Label(window, text = "gospodarz", bg = "#17F8E3", font = "none 12") .grid(row=17, column=5, sticky='w')
Label(window, text = " - ", bg = "#17F8E3", font = "none 12") .grid(row=17, column=6, sticky='w')
Label(window, text = "gosc", bg = "#17F8E3", font = "none 12") .grid(row=17, column=7, sticky='w')

Label(window, text = "  dokladny wynik:", bg = "#17F8E3", font = "none 12") .grid(row=18, column=4, sticky='w')
output1 = Text(window, width=9, height=1, wrap=WORD, background="white")
output1.grid(row=18, column=5, sticky='w')
Label(window, text = " - ", bg = "#17F8E3", font = "none 12") .grid(row=18, column=6, sticky='w')
output2 = Text(window, width=9, height=1, wrap=WORD, background="white")
output2.grid(row=18, column=7, sticky='w')
Label(window, text = "  zaokraglony wynik:", bg = "#17F8E3", font = "none 12") .grid(row=19, column=4, sticky='w')
output3 = Text(window, width=9, height=1, wrap=WORD, background="white")
output3.grid(row=19, column=5, sticky='w')
Label(window, text = " - ", bg = "#17F8E3", font = "none 12") .grid(row=19, column=6, sticky='w')
output4 = Text(window, width=9, height=1, wrap=WORD, background="white")
output4.grid(row=19, column=7, sticky='w')
Button(window, text="wyczysc", width=6, command=clear) .grid(row=1, column=6, sticky='w')
window.mainloop()