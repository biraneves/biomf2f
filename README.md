# biomf2f - Convertitore di File Multi-FASTA

Il `biomf2f` è un'utilità da riga di comando scritta in C++ che consente di dividere un file multi-FASTA in più file FASTA, ciascuno contenente una singola sequenza. Questo strumento è stato progettato per facilitare il lavoro dei bioinformatici e di chiunque lavori con sequenze genetiche, permettendo una gestione più semplice e organizzata dei dati FASTA.

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
./biomf2f percorso/al/tuo/file.FASTA
```

Per abilitare l'output verboso, aggiungi l'opzione `/v`:

```bash
./biomf2f percorso/al/tuo/file.FASTA -v
```

## Prossimi passi per lo sviluppo di biomf2f

Il progetto `biomf2f` è in continua evoluzione. Di seguito è riportata una lista di miglioramenti e funzionalità che prevediamo di implementare in futuro:

1. **Supporto per Altri Formati di File**: Aggiunta di compatibilità con formati come GenBank o EMBL.

2. **Interfaccia Grafica Utente (GUI)**: Sviluppo di una GUI intuitiva per facilitare l'uso a chi preferisce evitare la linea di comando.

3. **Validazione dei File di Input**: Implementazione di controlli avanzati per assicurare l'integrità e il formato corretto dei file multi-FASTA.

4. **Opzioni Avanzate da Linea di Comando**: Inclusione di opzioni per definire un percorso di output e personalizzare prefissi o suffissi dei file risultanti.

5. **Rapporto di Sommario del Processamento**: Generazione di un rapporto post-elaborazione che riassume le sequenze trattate e gli errori rilevati.

6. **Ottimizzazione delle Prestazioni**: Benchmarking e miglioramento delle prestazioni per il trattamento di file di grandi dimensioni.

7. **Integrazione con Strumenti di Bioinformatica**: Facilitazione dell'integrazione con pipeline e strumenti bioinformatici esistenti.

8. **Documentazione Approfondita**: Creazione di documentazione dettagliata con esempi pratici d'uso.

9. **Test Automatizzati**: Sviluppo di test automatici per garantire la stabilità del software.

10. **Parallelizzazione**: Implementazione del processamento parallelo per sfruttare sistemi multicore.

11. **Installazione Semplificata**: Creazione di script di installazione per vari sistemi operativi.

12. **Sistema di Log**: Introduzione di un sistema di log per registrare dettagliatamente le operazioni e gli errori.

13. **Conformità di Licenza**: Verifica della compatibilità delle licenze delle dipendenze con quella del progetto.

14. **Community e Contributi**: Stabilire linee guida chiare per le contribuzioni esterne.

15. **Internazionalizzazione**: Supporto per più lingue nell'interfaccia utente.

16. **Pacchetti per Gestori di Pacchetti**: Distribuzione attraverso gestori di pacchetti come Homebrew, APT o Conda.

17. **Supporto per Ambienti Virtuali**: Garanzia di compatibilità con ambienti virtuali come Docker e Conda.

Siamo sempre aperti a feedback e contributi per migliorare `biomf2f`. Se hai suggerimenti o vuoi contribuire, per favore apri una issue o una pull request.

## Licenza

`biomf2f` è distribuito sotto la licenza AGPL. Per maggiori dettagli, vedi il file LICENSE incluso in questo repository.

## Contatti

Se hai domande o commenti, non esitare a contattare il mantainer del progetto.

---

Grazie per usare biomf2f nella tua ricerca e sviluppo bioinformatico!
