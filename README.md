# C Encryption/Decryption

This C program provides a command-line interface for encrypting and decrypting text using a XOR cipher. It allows users to secure their data by converting plaintext into ciphertext and vice versa.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Installation](#installation)
- [Example](#example)
- [Supported Platforms](#supported-platforms)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Encryption is the process of converting plain text into ciphertext, while decryption is the reverse process of converting ciphertext back into plaintext. This program implements a simple XOR cipher, which performs a bitwise exclusive OR operation between each character of the input text and a user-specified key to produce encrypted or decrypted text.

## Features

- Command-line interface for easy interaction.
- XOR cipher implementation for encryption and decryption.
- File-based input and output for processing large text data.

## Usage

1. **Installation:** Compile the program using any C compiler (e.g., GCC).

    ```bash
    gcc -o encrypt_decrypt encrypt_decrypt.c
    ```

2. **Run the Program:** Execute the compiled executable.

    ```bash
    ./encrypt_decrypt
    ```

3. **Input:** Enter the name of the input file containing the text to encrypt/decrypt.

4. **Operation:** Choose the desired operation:
   - `1` for Encryption
   - `2` for Decryption

5. **Key:** Input a single character as the encryption/decryption key.

6. **Output:** Provide the name of the output file to save the result.

## Installation

Ensure you have a C compiler installed on your system. If not, install one appropriate for your platform. Then, compile the source code using the provided instructions in the Usage section.

## Example

Suppose you have a file named `input.txt` containing the text:

```Hello, World!```


To encrypt this text using the key `K` and save the result to `output.txt`, follow these steps:

1. Enter `input.txt` as the input file name.
2. Choose `1` for encryption.
3. Enter `K` as the encryption key.
4. Provide `output.txt` as the output file name.

## Supported Platforms

This program should run on any platform with a standard C compiler and file system support.

## Contributing

Contributions are welcome! If you have any ideas for improvements or bug fixes, please fork the repository, make your changes, and submit a pull request. For major changes, open an issue first to discuss the proposed modifications.

## License

This project is licensed under the MIT License.

