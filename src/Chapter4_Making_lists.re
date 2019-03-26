/* 4.1 */
let evens = l => {
  let rec aux = (l, i) =>
    switch (l) {
    | [] => []
    | [h, ...t] when i mod 2 == 0 => [h, ...aux(t, i + 1)]
    | [_, ...t] => aux(t, i + 1)
    };
  aux(l, 1);
};

/* 4.1 */
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

/* 4.2: count_true: bool list -> int; */
let rec count_true = l =>
  switch (l) {
  | [] => 0
  | [true, ...t] => 1 + count_true(t)
  | [_, ...t] => count_true(t)
  };

/* 4.3: palindrome: a' list -> a' list  */
let palindrome = l => l @ List.rev(l);

/* 4.3: is_palindrome: a' list -> bool */
let is_palindrome = l => {
  let r = List.rev(l);
  r == l;
};

/* 4.3: is_palindrome_custom_equal: a' list -> bool */
let is_palindrome_custom_equal = l => {
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
/* 4.3: is_palindrome_tail_custom_equal: a' list -> bool */
let is_palindrome_tail_custom_equal = l => {
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

/* 4.4: drop_last: a' list -> a' list */
let drop_last = l =>
  switch (List.rev(l)) {
  | [] => []
  | [_, ...t] => List.rev(t)
  };

/* 4.4: drop_last_recursive: a' list -> a' list */
let rec drop_last_recursive = l =>
  switch (l) {
  | [] => []
  | [_] => []
  | [h, ...t] => [h, ...drop_last_recursive(t)]
  };

/* 4.4: drop_last_recursive: a' list -> a' list */
let drop_last_tail_recursive = l => {
  let rec aux = (l, acc_list) =>
    switch (l) {
    | [] => []
    | [_] => acc_list
    | [h, ...t] => aux(t, [h, ...acc_list])
    };
  aux(l, []) |> List.rev;
};

/* (int, int) => int */
let max_int = (a, b) =>
  if (a >= b) {
    a;
  } else {
    b;
  };

/*
   https://reasonml.github.io/api/Array.html
   https://reasonml.github.io/api/Num.html
 */
/* 4.4: (a' list) => a' list */
let drop_last_array = l => {
  let a = Array.of_list(l);
  let len = max_int(0, Array.length(a) - 1);
  Array.sub(a, 0, len) |> Array.to_list
}

/*  
 * Write a function member of type α → α list → bool which 
 * returns true if an element exists in a list, or false if not. 
 * For example, member 2 [1; 2; 3] should evaluate to true, 
 * but member 3 [1; 2] should evaluate to false.
 */

/* 4.5: member: a' -> a' list -> bool */
let rec member = (a, l) => 
  switch l {
  | [] => false
  | [h, ...t] => a == h ? true : member(a, t)
  };

let rec member_match = (a, l) =>
  switch l {
  | [] => false
  | [h, ..._] when a == h => true
  | [_, ...t] => member_match(a, t)
  }

/* a' list -> (('a) => boolean) -> boolean */
let rec exists = (a, p) => 
  switch a {
  | [] => false
  | [h, ..._] when p(h) => true
  | [_, ...t] => exists(t, p)
  }


/*  
* 6 Use your member function to write a function make_set which, 
* given a list, returns a list which contains all the elements of the original list, 
* but has no duplicate elements. For example, make_set [1; 2; 3; 3; 1] might return [2; 3; 1]. 
* What is the type of your function?
*/
/* 4.6: make_set: a' list -> a' list */
let make_set = l => {
  let rec aux = (initial, result) => {
    switch initial {
    | [] => result
    | [h, ...t] when not (member_match(h, result)) => aux(t, [h, ...result])
    | [_, ...t] => aux(t, result)
    };
  }
  aux(l, []);
}


/* 
 * 7 Can you explain why the rev function we defined is inefficient? 
 *   How does the time it takes to run relate to the size of its argument? 
 *   Can you write a more efficient version using an accumulating argument? 
 *   What is its efficiency in terms of time taken and space used? 
*/