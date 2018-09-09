let multiplyByTen = factor =>
    factor * 10;


let nonZero = (x, y) => x !== 0 && y !== 0;

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
