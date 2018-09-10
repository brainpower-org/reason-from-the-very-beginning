let not = a => 
    switch(a) {
    | true => false
    | _ => true
    }


not(true) |> Js.log;
not(false) |> Js.log;

let rec sum = n => 
    switch (n) {
        | 0 => 0
        | _ => n + sum(n - 1)
    };

let rec power = (x, n: float) => 
    switch (n) {
        | 0. => 1.
        | _ when (n < 0.) => 1. /. power(x, abs_float(n))
        | _ => x *. power(x, n -. 1.)
    };

sum(1) |> Js.log;
sum(2) |> Js.log;
sum(0) |> Js.log;

/* 
power(2, 2) |> Js.log; 
power(2, 0) |> Js.log;
*/
power(2., -1.) |> Js.log;

let isUpper = c => 
    switch(c) {
    | 'A'..'Z' => true
    | _ => false
    };


let isLower = c => 
    switch(c) {
    | 'a'..'z' => true
    | _ => false
    };

isUpper('A') |> Js.log;
isUpper('b') |> Js.log;
isLower('A') |> Js.log;
isLower('b') |> Js.log;
isLower('0') |> Js.log;


let isin = (s, e, c) =>
    Char.code(c) <= Char.code(e) &&
    Char.code(c) >= Char.code(s);

isin('a','z','0') |> Js.log;
isin('a','z','a') |> Js.log;
isin('a','z','b') |> Js.log;