# biomf2f - Multi-FASTA File Converter

`biomf2f` is a command-line utility written in C++ that allows the splitting of a multi-FASTA file into multiple FASTA files, each containing a single sequence. This tool has been designed to facilitate the work of bioinformaticians and anyone working with genetic sequences, allowing for a more straightforward and organized management of FASTA data.

## Features

- **Simplicity:** a clear and easy-to-use command-line interface.
- **Verbose output:** `-v` option for detailed output providing traceability of the operations performed.
- **Portability:** written in standard C++, `biomf2f` can be executed on various operating systemas where a C++ compiler is available.

## Dependencies

Make sure you have a C++ compiler (such as `g++` or `clang++`) installed on your machine to compile the program.

## Compilation

To compile the program, use the following command in the terminal:

```bash
    g++ -o biomf2f biomf2f.cpp
```

## Usage

After compiling the program, you can run it with:

```bash
    ./biomf2f path/to/your/file.fasta
```

To enable verbose output, add the `-v` option:

```bash
    ./biomf2f path/to/your/file.fasta -v
```

## Next steps for biomf2f development

The `biomf2f` project is continually evolving. Below is a list of improvements and features that we plan to implement in the future:

1. **Support for other file formats:** adding compatibility with formats like GenBank or EMBL.

2. **Graphical user interface (GUI):** development of an intuitive GUI to facilitate use by those who prefer to avoid the command line.

3. **Input file validation:** implementation of advanced checks to ensure the integrity and correct format of multi-FASTA files.

4. **Advanced command-line options:** inclusion of options to define an output path and customize prefixes or suffixes of the resulting files.

5. **Processing summary report:** generation of a post-processing report summarizing the sequences processed and errors detected.

6. **Performance optimization:** benchmarking and performance improvement for handling large files.

7. **Integration with bioinformatics tools:** facilitation of integration with existing bioinformatics pipelines and tools.

8. **Comprehensive documentation:** creation of detailed documentation with practical usage examples.

9. **Automated testing:** development of automated tests to ensure software stability.

10. **Parallelization:** implementation of parallel processing to take advantage of multicore systems.

11. **Simplified installation:** creation of installation scripts for various operating systems.

12. **Logging system:** introduction of a logging system to record operations and errors in detail.

13. **License compliance:** verification of the compatibility of dependency licenses with the projects license.

14. **Community and contributions:** establishing clear guidelines for external contributions.

15. **Internationalization:** support for multiple languages in the user interface.

16. **Package manager distribution:** distribution through package managers like Homebrew, APT, or Conda.

17. **Support for virtual environments:** ensuring compatibility with virtual environments like Docker and Conda.

We are always open to feedback and contributions to improve `biomf2f`. If you have suggestions or want to contribute, please open an issue or a pull request.

## License

`biomf2f` is distributed under the AGPL license. For more details, see the LICENSE file included in this repository.

## Contact

If you have questions or comments, do not hesitate to contact the project maintainer.

---

Thank you for using `biomf2f` in your bioinformatics research and development!