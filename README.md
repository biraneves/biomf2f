# biomf2f - Convertitore di File Multifasta

Il `biomf2f` è un'utilità da riga di comando scritta in C++ che consente di dividere un file multifasta in più file fasta, ciascuno contenente una singola sequenza. Questo strumento è stato progettato per facilitare il lavoro dei bioinformatici e di chiunque lavori con sequenze genetiche, permettendo una gestione più semplice e organizzata dei dati fasta.

## Caratteristiche

- **Semplicità**: Un'interfaccia da riga di comando chiara e facile da usare.
- **Output Verboso**: Opzione `-v` per un output dettagliato che fornisce una tracciabilità delle operazioni eseguite.
- **Portabilità**: Scritto in C++ standard, `biomf2f` è eseguibile su vari sistemi operativi dove il compilatore C++ è disponibile.

## Dipendenze

Assicurati di avere un compilatore C++ (come `g++` o `clang++`) installato sulla tua macchina per compilare il programma.

## Compilazione

Per compilare il programma, usa il seguente comando nel terminale:

```bash
g++ -o biomf2f biomf2f.cpp
```

## Uso

Dopo aver copilato il programma, puoi eseguirlo con:

```bash
./biomf2f percorso/al/tuo/file.fasta
```

Per abilitare l'output verboso, aggiungi l'opzione `/v`:

```bash
./biomf2f percorso/al/tuo/file.fasta -v
```

## Contribuire

Sei invitato a contribuire al progetto biomf2f! Se hai un'idea o una proposta, sentiti libero di aprire una issue o una pull request.

## Licenza

`biomf2f` è distribuito sotto la licenza AGPL. Per maggiori dettagli, vedi il file LICENSE incluso in questo repository.

## Contatti

Se hai domande o commenti, non esitare a contattare il mantainer del progetto.

---

Grazie per usare biomf2f nella tua ricerca e sviluppo bioinformatico!
