# GEMINI.md

## Project Overview

This project is `fastcompmgr`, a lightweight and high-performance compositor for the X11 windowing system. It is a fork of `compton`, which itself is a fork of `xcompmgr`. The primary goal of `fastcompmgr` is to provide a responsive user experience with minimal resource consumption, particularly on systems where other compositors may feel sluggish.

The entire project is written in C and uses core X11 libraries such as `libX11`, `libXcomposite`, `libXdamage`, `libXfixes`, and `libXrender`.

## Building and Running

### Dependencies

To build `fastcompmgr`, the following dependencies are required:

*   `libx11`
*   `libxcomposite`
*   `libxdamage`
*   `libxfixes`
*   `libxrender`
*   `pkg-config`
*   `make`

### Building the Project

To build the project, run the following command in the root directory:

```bash
make
```

### Installing the Project

To install the compiled binary, run:

```bash
make install
```

### Running the Compositor

To run `fastcompmgr` with some recommended settings, use the following command:

```bash
fastcompmgr -o 0.4 -r 12 -c -C
```

For a full list of options, refer to the `fastcompmgr.1` man page or run `man fastcompmgr` after installation.

## Development Conventions

*   **Language:** The project is written entirely in C.
*   **Build System:** The project uses a standard `Makefile` for building and installation.
*   **Code Style:** The code follows a consistent style, with clear function and variable naming. Header files (`.h`) are used for declarations, and source files (`.c`) for implementations.
*   **Modularity:** The code is organized into several modules, each with a specific purpose (e.g., `cm-global`, `cm-root`, `comp_rect`).
*   **Comments:** The code is well-commented, explaining the purpose of different functions and complex logic.
