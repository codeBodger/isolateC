# Isolate C

## Description
A way to write multiple C files within one file, effectively allowing easier
finer-grained control over the scope of names.

## Usage
Within an Isolate C file, the `#isolate` pseudo-preprocessor directive is used to
indicate to the Isolate C Preprocessor (`icp`) that the contents *above* and
*below* the directive should be functionally treated as separate files.  Sections
can be given names after the directive, e.g. `#isolate draw`.  By default,
the section before the first directive will be called `main` (this can be
overridden by having an `#isolate` directive as the first line).  Subsequent
unnamed sections are given names which are the sha256 of their contents.  The
best practice is by far to give all of your sections names (possibly excluding
the first, if `main` is acceptable).

The Isolate C Preprocessor will split up the file into C files named with the
filename and section name, e.g. a file named `snake.ic` with sections `head`,
`tail`, and `draw` (with non-empty first section) will produce the files
`snake_main.c`, `snake_head.c`, `snake_tail.c`, and `snake_draw.c`.  It will also
create a `.mk` file (here `snake.mk`), which is designed to be used as in the
example linked below.

The Isolate C Preprocessor is designed to be used with GNU `make`.  Check out the
example `Makefile` [here](https://github.com/codeBodger/isolateC/blob/main/test/Makefile).

## Implementation
IDK: check the comments...

Sorry

## TODO
- [ ] sha256 defaults
- [ ] `import` and `export`, as I'd previously thought about (file-local vs not?)
- [ ] autogeneration of headers, possible inherently connected to `im`/`ex``port`
