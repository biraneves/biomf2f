#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
  // Verifica se è stato fornito un nome di file
  if (argc != 2) {
    std::cerr << "Uso: biomf2f <file_multifasta>" << std::endl;
    return 1;
  }

  // Apre il file multifasta per la lettura
  std::ifstream fileMultifasta(argv[1]);

  if (!fileMultifasta.is_open()) {
    std::cerr << "Errore nell'aprire il file" << std::endl;
    return 1;
  }

  std::string riga;
  std::ofstream fileFastaCorrente;
  int numeroDiSequenza = 0;

  // Elabora il file riga per riga
  while (std::getline(fileMultifasta, riga)) {
    // Se la riga è un'intestazione di sequenza
    if (riga[0] == '>') {
      if (fileFastaCorrente.is_open()) {
	fileFastaCorrente.close();
      }

      std::ostringstream nomeFile;
      nomeFile << "sequenza_" << numeroDiSequenza << ".fasta";
      fileFastaCorrente.open(nomeFile.str());

      if (!fileFastaCorrente.is_open()) {
	std::cerr << "Errore nella creazione del file fasta" << std::endl;
	return 1;
      }

      numeroDiSequenza++;
    }

    // Scrivi la linea nel file fasta corrente
    if (fileFastaCorrente.is_open()) {
      fileFastaCorrente << riga << '\n';
    }
  }

  // Chiude l'ultimo file fasta se è aperto
  if (fileFastaCorrente.is_open()) {
    fileFastaCorrente.close();
  }

  std::cout << "Conclusione dell'elaborazione dei file fasta" << std::endl;
  return 0;
}
