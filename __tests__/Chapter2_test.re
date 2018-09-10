open Jest;
open Chapter2_NamesAndFunctions;
open Expect;

describe("multiplyByTen", () => {
  test("with 10", () => expect(multiplyByTen(10)) |> toBe(100))
});

describe("nonZero", () => {
    test("0 0", () => expect(nonZero(0, 0)) |> toBe(false))
    test("0 1", () => expect(nonZero(0, 1)) |> toBe(false))
    test("1 1", () => expect(nonZero(1, 1)) |> toBe(true))
  }
);
