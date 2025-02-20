Module().then((wasmModule) => {
    window.wasmInstance = wasmModule;
    console.log("WASM Loaded!");
});

function checkPalindrome() {
    let num = parseInt(document.getElementById("num").value);
    let result = window.wasmInstance._is_palindrome(num);
    let resultMessage = result === 1 ? `${num} is a palindrome.` : `${num} is not a palindrome.`;
    document.getElementById("result").innerText = resultMessage;
}
