// Using user 
const input = prompt("Enter two integers separated by space (e.g., '3 19'):");
const [n, m] = input.split(" ").map(Number);

// Calculating the sum of n and m
const sum = n + m;

// Outputting the result
console.log(sum);

