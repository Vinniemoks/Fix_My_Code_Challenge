#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.stderr.write("Usage: ./1-print_square.js <size>\n");
    process.stderr.write("Example: ./1-print_square.js 8\n");
    process.exit(1);
}

let size = parseInt(process.argv[2], 10);  // Use base 10

// Check if size is a valid number and greater than 0
if (isNaN(size) || size <= 0) {
    process.stderr.write("Size must be a positive number\n");
    process.exit(1);
}

for (let i = 0; i < size; i++) {
    console.log("#".repeat(size));  // Simplified loop
}

