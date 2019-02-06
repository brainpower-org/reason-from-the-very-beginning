open Jest;
open Chapter4_Making_lists;
open Expect;

/* 4.1 */
describe("evens", () => {
  test("odd", () => expect(evens([2,4,2,4,2])) |> toEqual([4,4]));
  test("empty", () => expect(evens([])) |> toEqual([]));
  test("one", () => expect(evens([1])) |> toEqual([]));
  test("even", () => expect(evens([1,2])) |> toEqual([2]));
});

/* 4.1 */
describe("evens_tail", () => {
  test("odd", () => expect(evens_tail([2,4,2,4,2])) |> toEqual([4,4]));
  test("empty", () => expect(evens_tail([])) |> toEqual([]));
  test("one", () => expect(evens_tail([1])) |> toEqual([]));
  test("even", () => expect(evens_tail([1,2])) |> toEqual([2]));
});

/* 4.2 */
describe("count_true", () => {
  test("basic", () => expect(count_true([true, false, true])) |> toEqual(2));
  test("empty", () => expect(count_true([])) |> toEqual(0));
  test("one false", () => expect(count_true([false])) |> toEqual(0));
  test("one true", () => expect(count_true([true])) |> toEqual(1));
});

/* 4.3 */
describe("palindrome", () => {
  test("empty", () => expect(palindrome([])) |> toEqual([]));
  test("single", () => expect(palindrome([1])) |> toEqual([1,1]));
  test("basic", () => expect(palindrome([true, false])) |> toEqual([true, false, false, true]));
});

/* 4.3 */
describe("is_palindrome_custom_equal", () => {
  test("empty", () => expect(is_palindrome_custom_equal([])) |> toEqual(true));
  test("single", () => expect(is_palindrome_custom_equal([1])) |> toEqual(true));
  test("basic", () => expect(is_palindrome_custom_equal([true, false])) |> toEqual(false));
});

/* 4.3 */
describe("is_palindrome_tail_custom_equal", () => {
  test("empty", () => expect(is_palindrome_tail_custom_equal([])) |> toEqual(true));
  test("single", () => expect(is_palindrome_tail_custom_equal([1])) |> toEqual(true));
  test("basic_number", () => expect(is_palindrome_tail_custom_equal([1, 2, 3])) |> toEqual(false));
  test("basic", () => expect(is_palindrome_tail_custom_equal([true, false])) |> toEqual(false));
});

/* 4.3 */
describe("is_palindrome", () => {
  test("empty", () => expect(is_palindrome([])) |> toBe(true));
  test("single", () => expect(is_palindrome([1])) |> toBe(true));
  test("no_palindrome", () => expect(is_palindrome([1, 2])) |> toBe(false));
  test("basic", () => expect(is_palindrome([1, 2, 1])) |> toBe(true));
});

/* 4.4 */
describe("drop_last", () => {
  test("empty", () => expect(drop_last([])) |> toEqual([]));
  test("basic", () => expect(drop_last([1, 2, 3, 4])) |> toEqual([1, 2, 3]));
  test("two last equals", () => expect(drop_last([1, 2, 1, 1])) |> toEqual([1, 2, 1]));
});

/* 4.4 */
describe("drop_last_recursive", () => {
  test("empty", () => expect(drop_last_recursive([])) |> toEqual([]));
  test("basic", () => expect(drop_last_recursive([1, 2, 3, 4])) |> toEqual([1, 2, 3]));
  test("two last equals", () => expect(drop_last_recursive([1, 2, 1, 1])) |> toEqual([1, 2, 1]));
});

/* 4.4 */
describe("drop_last_tail_recursive", () => {
  test("empty", () => expect(drop_last_tail_recursive([])) |> toEqual([]));
  test("basic", () => expect(drop_last_tail_recursive([1, 2, 3, 4])) |> toEqual([1, 2, 3]));
  test("two last equals", () => expect(drop_last_tail_recursive([1, 2, 1, 1])) |> toEqual([1, 2, 1]));
});

/* max_int */
describe("max_int", () => {
  test("max_int", () => expect(max_int(0, 3)) |> toEqual(3));
  test("max_int", () => expect(max_int(10, -6)) |> toEqual(10));
  test("max_int", () => expect(max_int(6, 6)) |> toEqual(6));
});

/* 4.4 */
describe("drop_last_array", () => {
  test("empty", () => expect(drop_last_array([])) |> toEqual([]));
  test("basic", () => expect(drop_last_array([1, 2, 3, 4])) |> toEqual([1, 2, 3]));
  test("two last equals", () => expect(drop_last_array([1, 2, 1, 1])) |> toEqual([1, 2, 1]));
});


/* 4.5 */
describe("member", () => {
  test("empty", () => expect(member(1, [])) |> toEqual(false));
  test("match", () => expect(member(1, [1, 2, 3, 4])) |> toEqual(true));
  test("not in list", () => expect(member(3, [1, 2, 1, 1])) |> toEqual(false));
});

describe("member_match", () => {
  test("empty", () => expect(member_match(1, [])) |> toEqual(false));
  test("match", () => expect(member_match(1, [1, 2, 3, 4])) |> toEqual(true));
  test("not in list", () => expect(member_match(3, [1, 2, 1, 1])) |> toEqual(false));
});