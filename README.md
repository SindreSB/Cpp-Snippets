# C++ Samples

I de forskjellige mappene ligger det korte eksempler som viser forskjellige funksjoner/aspekter ved C++. Eksemplene baserer seg ikke på bruk av noe spesielt IDE, og er i hovedsak kun testet på Ubuntu/Linux. 

De fleste eksemplene inkluderer header-filen std_lib_facilities.h. Denne er en forenklet verson av std_lib_facilities som er brukt i TDT4102, det betyr at en kan bruke et standard std_lib_facilities prosjekt og lime inn koden i eksemplene. Evt bruke et helt tomt prosjekt og legge inn både std_lib_facilities og .cpp filen



## Fremgangmåte på Linux
På linux kan eksemplene kompileres med g++ som følger med de fleste linux distroer. Ved å legge til en kommando i bash kan det hele forenkles enda mer 

Ved å definere følgende kommando/funksjon:

```bash
g++c() { g++ "$1" -I.. -I.; ./a.out; rm -f ./a.out; }
```

Kan man kompilere, kjøre, og deretter slette den kjørbare filen ved å skrive 
```bash
g++c [filnavn].cpp
```

