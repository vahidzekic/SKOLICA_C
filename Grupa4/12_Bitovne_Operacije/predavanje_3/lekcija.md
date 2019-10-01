# Predavanje 3: Bitovne Maske i Zastavice

## Teorijsko Objašnjenje
Bitovne maske koristimo za postavljanje (setovanje), brisanje i proveru stanja određenog bita.
- Setovanje bita: `registar |= maska`
- Brisanje bita: `registar &= ~maska`
- Provera bita: `(registar & maska) != 0`
