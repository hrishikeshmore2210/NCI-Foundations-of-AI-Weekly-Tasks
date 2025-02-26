window?.TeaVM?.runtime?.waitForReady().then(function() {
    window.calculatePower = PowerCalculator.calculatePower;
    console.log(calculatePower(5, 3)); 
});


function calculate(event) {
    event.preventDefault(); 


    const base = parseFloat(document.getElementById("numberInput1").value);
    const exponent = parseFloat(document.getElementById("numberInput2").value);


    if (isNaN(base) || isNaN(exponent)) {
        document.getElementById("result").innerText = "Please enter valid numbers.";
        return;
    }


    const result = Math.pow(base, exponent); // OR: const result = base ** exponent;

 
    document.getElementById("result").innerText = `${base} raised to the power of ${exponent} is: ${result}`;
}
