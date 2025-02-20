fetch("factorial.wasm")
  .then(response => response.arrayBuffer())
  .then(bytes => WebAssembly.instantiate(bytes))
  .then(({ instance }) => {
      console.log("Factorial of 5:", instance.exports.factorial(5));
  });
