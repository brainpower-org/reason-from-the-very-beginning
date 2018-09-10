open Jest;
open Chapter3_Case_by_case;
open Expect;

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


describe("isUpper", () => {
  test("A", () => expect(isUpper('A')) |> toBe(true));
  test("u", () => expect(isUpper('u')) |> toBe(false));
  test("0", () => expect(isUpper('0')) |> toBe(false));
});

describe("isLower", () => {
  test("A", () => expect(isLower('A')) |> toBe(false));
  test("u", () => expect(isLower('u')) |> toBe(true));
  test("0", () => expect(isLower('0')) |> toBe(false));
});

describe("isin", () => {
  test("a, z, 0", () => expect(isin('a','z','0')) |> toBe(false));
  test("a, z, a", () => expect(isin('a','z','a')) |> toBe(true));
  test("a, z, b", () => expect(isin('a','z','b')) |> toBe(true));
  test("a, z, z", () => expect(isin('a','z','b')) |> toBe(true));
});
