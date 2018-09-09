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

describe("sum", () => {
  test("1", () => expect(sum(1)) |> toBe(1));
  test("2", () => expect(sum(2)) |> toBe(3));
  test("0", () => expect(sum(0)) |> toBe(0));
});

describe("power", () => {
  test("2, 2", () => expect(power(2., 2.)) |> toBe(4.));
  test("2, 0", () => expect(power(2., 0.)) |> toBe(1.));
  test("2. -1.", () => expect(power(2., -1.)) |> toBe(0.5));
});
