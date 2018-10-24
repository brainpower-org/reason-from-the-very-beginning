open Jest;
open Chapter4_Making_lists;
open Expect;

describe("evens", () => {
  test("odd", () => expect(evens([2,4,2,4,2])) |> toEqual([4,4]));
  test("empty", () => expect(evens([])) |> toEqual([]));
  test("one", () => expect(evens([1])) |> toEqual([]));
  test("even", () => expect(evens([1,2])) |> toEqual([2]));
});

describe("evens_tail", () => {
  test("odd", () => expect(evens_tail([2,4,2,4,2])) |> toEqual([4,4]));
  test("empty", () => expect(evens_tail([])) |> toEqual([]));
  test("one", () => expect(evens_tail([1])) |> toEqual([]));
  test("even", () => expect(evens_tail([1,2])) |> toEqual([2]));
});

describe("count_true", () => {
  test("basic", () => expect(count_true([true, false, true])) |> toEqual(2));
  test("empty", () => expect(count_true([])) |> toEqual(0));
  test("one false", () => expect(count_true([false])) |> toEqual(0));
  test("one true", () => expect(count_true([true])) |> toEqual(1));
});

describe("palindrome", () => {
  test("empty", () => expect(palindrome([])) |> toEqual([]));
  test("single", () => expect(palindrome([1])) |> toEqual([1,1]));
  test("basic", () => expect(palindrome([true, false])) |> toEqual([true, false, false, true]));
});

describe("is_palindrome_wurscht", () => {
  test("empty", () => expect(is_palindrome_wurscht([])) |> toEqual(true));
  test("single", () => expect(is_palindrome_wurscht([1])) |> toEqual(true));
  test("basic", () => expect(is_palindrome_wurscht([true, false])) |> toEqual(false));
});

describe("is_palindrome_tail_wurscht", () => {
  test("empty", () => expect(is_palindrome_tail_wurscht([])) |> toEqual(true));
  test("single", () => expect(is_palindrome_tail_wurscht([1])) |> toEqual(true));
  test("basic_number", () => expect(is_palindrome_tail_wurscht([1, 2,3])) |> toEqual(false));
  test("basic", () => expect(is_palindrome_tail_wurscht([true, false])) |> toEqual(false));
});

describe("is_palindrome", () => {
  test("empty", () => expect(is_palindrome([])) |> toBe(true));
  test("single", () => expect(is_palindrome([1])) |> toBe(true));
  test("no_palindrome", () => expect(is_palindrome([1,2])) |> toBe(false));
  test("basic", () => expect(is_palindrome([1,2,1])) |> toBe(true));
});

