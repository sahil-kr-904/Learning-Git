const factorial = (n)=>{
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

console.log("Hello World!");
let n = 5;
console.log("Factorial of 5 is: ",factorial(n));