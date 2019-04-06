# Reason from the very Beginning

* Study repository for learning ReasonML
* Basic `bs-platform` setup
* TDD via `bs-jest`
* Exercises taken from OCaml from the very Beginnging

## Prerequesites

* docker-compose
* Browser


## Getting started

```sh
docker-compose pull
docker-compose up # Open browser at localhost:8443
```

<details>
<summary>Local Setup</summary>

## Getting started

```sh
yarn
bsb -make-world

yarn watch

# Second terminal session
yarn test --watchAll

# Third terminal session
node src/[module-name]
```
</details>


## Related

* [OCaml from the very Beginning](https://github.com/sinnerschrader/ocaml-from-the-very-beginning)
