let not = a => 
    switch(a) {
    | true => false
    | _ => true
    }

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



let isin = (s, e, c) =>
    Char.code(c) <= Char.code(e) &&
    Char.code(c) >= Char.code(s);
