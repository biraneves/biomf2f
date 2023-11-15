#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
  bool verbose = false;
  
  // Checks if a file name has been provided
  if (argc < 2) {
    std::cerr << "Use: biomf2f <multi_fasta_file>" << std::endl;
    return 1;
  }

  // Check if the verbose output option exists
  if (argc > 2 && std::string(argv[2]) == "-v") {
      verbose = true;
  }

  // Opens the multi-FASTA file for reading
  std::ifstream multiFastaFile(argv[1]);

  if (!multiFastaFile.is_open()) {
    std::cerr << "Error opening the file" << std::endl;
    return 1;
  }

  std::string line;
  std::ofstream currentFastaFile;
  int sequenceNumber = 0;

  // Process the file line by line
  while (std::getline(multiFastaFile, line)) {
    // If the line is a sequence header
    if (line[0] == '>') {
      if (currentFastaFile.is_open()) {
	currentFastaFile.close();
	if (verbose) std::cout << ". ✔︎" << std::endl;
      }

      if (verbose) std::cout << "Creating the file sequence_" << sequenceNumber << ".fasta'.";

      std::ostringstream fileName;
      fileName << "sequence_" << sequenceNumber << ".fasta";
      currentFastaFile.open(fileName.str());

      if (!currentFastaFile.is_open()) {
	std::cerr << "Error creating the FASTA file" << std::endl;
	return 1;
      }

      if (verbose) std::cout << ".";

      sequenceNumber++;
    }

    // Write the line to the current fasta file
    if (currentFastaFile.is_open()) {
      currentFastaFile << line << '\n';
    }

  }

  // Closes the last FASTA file if it is open
  if (currentFastaFile.is_open()) {
    currentFastaFile.close();
  }

  if (verbose) {
    std::cout << ". ✔︎" << std::endl;
    std::cout << "Completion of the processing of the FASTA files" << std::endl;
  }
  
  return 0;
}
