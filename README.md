# c-unit-testing-demo
Unit testing Demo for C language

#### Table of Contents

<!-- TOC -->

- [Installation](#installation)
- [Usage](#usage)

<!-- /TOC -->

## Installation
### Windows Environement
 - `GCC` - to run C programs (installed by [MinGW](https://sourceforge.net/projects/mingw/)). Add executable to Path variable. 
    ```console
    gcc --version
    ln -s C:\MinGW\bin\mingw32-make.exe C:\MinGW\bin\make.exe
    ```
 - `Ruby` - version 3.0.x [download](https://rubyinstaller.org/)
   ```console
   ruby.exe --version
   ```
 - `Ceedling` - Ceedling is a Ruby gem that takes care of all the setup, building, and running of C unit tests. Ceedling is primarily targeted at Test-Driven Development in C.  Ceedling includes a test framework (Unity), a mocking framework (CMock), and CException. See [Tutorial](http://www.electronvector.com/blog/add-unit-tests-to-your-current-project-with-ceedling).
   ```console
   gem install ceedling
   ceedling version
   ```
 - `gcovr` - Tool for code coverage
    ```console
   pip install gcovr
   gcov --version
   ```
   Enable plugin in project.yml
## Usage
### Compile and Running
```console
make.exe
bin/demo.exe
```

### Create a ceedling project and run tests
```console
ceedling new <project_name> # creates a new project with 'src' and 'test' folders and 'project.yml' file
ceedling module:create[<module_name>] # creates 'module.c', 'module.h' and 'test_module.c' files
ceedling test:all   # Runs all tests
ceedling gcov:all   # Runs tests with line coverage
ceedling utils:gcov # Produces detailed HTML Report
ceedling clean
```