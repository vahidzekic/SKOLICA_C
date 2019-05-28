# Predavanje 3: Sinhronizacija Niti i Mutexi

## Teorijsko Objašnjenje
Kada više niti pristupa istoj deljenoj promenljivoj u isto vreme, može doći do neželjenog ponašanja (race condition). Da bismo to sprečili, koristimo mutex (mutual exclusion) kako bismo obezbedili da samo jedna nit može pristupiti deljenom resursu (kritična sekcija) u datom trenutku.
