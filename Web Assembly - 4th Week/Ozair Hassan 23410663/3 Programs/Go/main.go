// main.go
package main

import (
    "strconv"
    "syscall/js"
)

func add(this js.Value, p []js.Value) interface{} {
    a, _ := strconv.ParseFloat(p[0].String(), 64)
    b, _ := strconv.ParseFloat(p[1].String(), 64)
    return a + b
}

func subtract(this js.Value, p []js.Value) interface{} {
    a, _ := strconv.ParseFloat(p[0].String(), 64)
    b, _ := strconv.ParseFloat(p[1].String(), 64)
    return a - b
}

func multiply(this js.Value, p []js.Value) interface{} {
    a, _ := strconv.ParseFloat(p[0].String(), 64)
    b, _ := strconv.ParseFloat(p[1].String(), 64)
    return a * b
}

func divide(this js.Value, p []js.Value) interface{} {
    a, _ := strconv.ParseFloat(p[0].String(), 64)
    b, _ := strconv.ParseFloat(p[1].String(), 64)
    if b == 0 {
        return "Error: Division by zero"
    }
    return a / b
}

func registerCallbacks() {
    js.Global().Set("add", js.FuncOf(add))
    js.Global().Set("subtract", js.FuncOf(subtract))
    js.Global().Set("multiply", js.FuncOf(multiply))
    js.Global().Set("divide", js.FuncOf(divide))
}

func main() {
    c := make(chan struct{}, 0)
    registerCallbacks()
    <-c // Prevent the function from returning
}
