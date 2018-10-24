let evens = l => {
  let rec aux = (l, i) =>
    switch (l) {
    | [] => []
    | [h, ...t] when i mod 2 == 0 => [h, ...aux(t, i + 1)]
    | [_, ...t] => aux(t, i + 1)
    };
  aux(l, 1);
};

let evens_tail = l => {
  let rec aux = (r, i) =>
    if (List.length(l) == i) {
      r;
    } else if ((i + 1) mod 2 == 0) {
      aux([List.nth(l, i), ...r], i + 1);
    } else {
      aux(r, i + 1);
    };
  aux([], 0);
};

/* count_true: bool list -> int; */
let rec count_true = l =>
  switch (l) {
  | [] => 0
  | [true, ...t] => 1 + count_true(t)
  | [_, ...t] => count_true(t)
  };

let palindrome = l => l @ List.rev(l);

let is_palindrome = l => {
  let r = List.rev(l);
  r == l;
};

let is_palindrome_wurscht = l => {
  let rec is_equal = (l, r) =>
    switch (l, r) {
    | ([], []) => true
    | (_, []) => false
    | ([], _) => false
    | ([hl, ...cl], [hr, ...cr]) => hl == hr && is_equal(cl, cr)
    };
  let r = List.rev(l);
  is_equal(l, r);
};

let is_palindrome_tail_wurscht = l => {
  let rec is_equal = (l, r, _is_palindrome) =>
    if (_is_palindrome) {
      switch (l, r) {
      | ([], []) => _is_palindrome
      | (_, []) => false
      | ([], _) => false
      | ([hl, ...cl], [hr, ...cr]) =>
        is_equal(cl, cr, _is_palindrome && hl == hr)
      };
    } else {
      _is_palindrome;
    };
  let r = List.rev(l);
  is_equal(l, r, true);
};