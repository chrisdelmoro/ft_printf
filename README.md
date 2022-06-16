<br/>
<p align="center">
    <img src="https://github.com/chrisdelmoro/42cursus/blob/main/badges/ft_printfm.png" alt="Logo" width="150" height="150">

  <p align="center">
    A printf re-implementation.
    <br/>
    <img src="https://img.shields.io/badge/Mandatory-OK-brightgreen"/>
    <img src="https://img.shields.io/badge/Final%20Score-100-blue"/>
  </p>
</p>


<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

In this project, we needed to implement a simple version of the libc function printf. To be more precise, this implementation recreate the following:

<div align="center">

| Convertion | Usage |
| --- | --- |
| <div align="center"> `%c` </div> | Prints a single character. |
| <div align="center"> `%s` </div> | Prints a string (as defined by the common C convention).
| <div align="center"> `%p` </div> | The void * pointer argument has to be printed in hexadecimal format. |
| <div align="center"> `%d` </div> | Prints a decimal (base 10) number. |
| <div align="center"> `%i` </div> | Prints an integer in base 10. |
| <div align="center"> `%u` </div> | Prints an unsigned decimal (base 10) number. |
| <div align="center"> `%x` </div> | Prints a number in hexadecimal (base 16) lowercase format. |
| <div align="center"> `%X` </div> | Prints a number in hexadecimal (base 16) uppercase format. |
| <div align="center"> `%%` </div> | Prints a percent sign. |

</div>

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- USAGE EXAMPLES -->
## Usage

To use this function download the repo and compile it with the make command.

1. Include the function header in your project like so:
```c
#include "ft_printf.h"
```

2. Compile your program including the libftprintf.a file as such:
```sh
gcc <your_program.c> libftprintf.a -I <path/to/your/headers>
```

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- LICENSE -->
## License

Distributed under the [GNU General Public License version 3 (GPLv3)](https://www.gnu.org/licenses/gpl-3.0.html). 

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Christian C. Del Moro - christian.delmor@gmail.com

Project Link: [https://github.com/chrisdelmoro/ft_printf](https://github.com/chrisdelmoro/ft_printf)

<p align="right">(<a href="#top">back to top</a>)</p>
