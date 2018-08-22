let multiplyByTen = factor =>
    factor * 10;


let nonZero = (x, y) => x !== 0 && y !== 0;

let rec sum = n => 
    switch (n) {
        | 0 => 0
        | _ => n + sum(n - 1)
    };

multiplyByTen(10) |> Js.log;

nonZero(0, 0) |> Js.log;
nonZero(0, 1) |> Js.log;
nonZero(1, 1) |> Js.log;

sum(1) |> Js.log;
sum(2) |> Js.log;
sum(0) |> Js.log;
