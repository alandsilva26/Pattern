Compilation of this program was done by using gcc compiler version 7.4.0 built by msys project  

###Installation   

To install GCC Compiler and run programs in your command prompt follow steps  
For another method skip to CODEBLOCKS 
 
 First check if GCC already exists by running the following command in your command promt  
 `gcc -v`   
 If not then proceed with the following steps  

 Install MSYS2 from their site [MSYS2](http://www.msys2.org/)    
 Follow exact instructions    
 After this MSYS2 MSYS will be installed along with MSYS2 MinGW 32-bit and MSYS2 MinGW 64-bit    
 You can find the shortcuts in the start menu    
 Run MSYS2 MSYS from the start menu     
 You will be greeted with a shell    

 Run command ` pacman -Syu `    
 The program may ask you to reopen your shell     
 Run the same command unti everything is up to date    
 Now we will install GCC and all other required pakages   
 
 Copy the following code and paste in the shell 'Ctrl + v' might not work  
 ```pacman -S --needed base-devel mingw-w64-i686-toolchain mingw-w64-x86_64-toolchain \  
                    git subversion mercurial \
                    mingw-w64-i686-cmake mingw-w64-x86_64-cmake
```
 Just click Enter and follow default instructions  
 
 Wait for everything to download and install.  
 GCC is now installed but you cannot Compile in ur cmd yet  
 If you try a GCC command such as   
 `gcc -v `
 you will get the following error  
 `gcc is not recognized as an internal or external command`  
 This is because your pc does not know the path to gcc  
 You will have to manually set the path  


##PATH
 To set path  
 Locate This PC on your Desktop  
 Right-Click   
 Open Properties  
 Click Advanced System Settings  
 In Advanced   
 Click Environment Variables  
 In User variables   
 Add new Path   
 Give a suitable Variable Name and add Varible Value as `C:\msys64\mingw64\bin` i.e. path to bin  
 Then Repeat and add `C:\msys64\ming32\bin`   
   in this order  

 Now you are good to go   
 Type `gcc -v` in your cmd and you will be greeted with something like this  
 ```
Microsoft Windows [Version 10.0.17134.523]
(c) 2018 Microsoft Corporation. All rights reserved.

C:\Users\Dell>gcc -vMicrosoft Windows [Version 10.0.17134.523]
(c) 2018 Microsoft Corporation. All rights reserved.

C:\Users\Dell>gcc -v
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=C:/msys64/mingw32/bin/../lib/gcc/i686-w64-mingw32/7.4.0/lto-wrapper.exe
Target: i686-w64-mingw32
Configured with: ../gcc-7.4.0/configure --prefix=/mingw32 --with-local-prefix=/mingw32/local --build=i686-w64-mingw32 --host=i686-w64-mingw32 --target=i686-w64-mingw32 --with-native-system-header-dir=/mingw32/i686-w64-mingw32/include --libexecdir=/mingw32/lib --enable-bootstrap --with-arch=i686 --with-tune=generic --enable-languages=c,lto,c++,objc,obj-c++,fortran,ada --enable-shared --enable-static --enable-libatomic --enable-threads=posix --enable-graphite --enable-fully-dynamic-string --enable-libstdcxx-time=yes --enable-libstdcxx-filesystem-ts=yes --disable-libstdcxx-pch --disable-libstdcxx-debug --disable-isl-version-check --enable-lto --enable-libgomp --disable-multilib --enable-checking=release --disable-rpath --disable-win32-registry --disable-nls --disable-werror --disable-symvers --with-libiconv --with-system-zlib --with-gmp=/mingw32 --with-mpfr=/mingw32 --with-mpc=/mingw32 --with-isl=/mingw32 --with-pkgversion='Rev1, Built by MSYS2 project' --with-bugurl=https://sourceforge.net/projects/msys2 --with-gnu-as --with-gnu-ld --disable-sjlj-exceptions --with-dwarf2
Thread model: posix
gcc version 7.4.0 (Rev1, Built by MSYS2 project)
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=C:/msys64/mingw32/bin/../lib/gcc/i686-w64-mingw32/7.4.0/lto-wrapper.exe
Target: i686-w64-mingw32
Configured with: ../gcc-7.4.0/configure --prefix=/mingw32 --with-local-prefix=/mingw32/local --build=i686-w64-mingw32   --host=i686-w64-mingw32 --target=i686-w64-mingw32 --with-native-system-header-dir=/mingw32/i686-w64-mingw32/include   --libexecdir=/mingw32/lib --enable-bootstrap --with-arch=i686 --with-tune=generic --enable-languages=c,lto,c++,objc,obj-c++,fortran,ada   --enable-shared --enable-static --enable-libatomic --enable-threads=posix --enable-graphite --enable-fully-dynamic-string --enable-libstdcxx-time=yes --enable-libstdcxx-filesystem-ts=yes   --disable-libstdcxx-pch --disable-libstdcxx-debug --disable-isl-version-check --enable-lto --enable-libgomp --disable-multilib   --enable-checking=release --disable-rpath --disable-win32-registry --disable-nls --disable-werror --disable-symvers --with-libiconv   --with-system-zlib --with-gmp=/mingw32 --with-mpfr=/mingw32 --with-mpc=/mingw32 --with-isl=/mingw32 --with-pkgversion='Rev1, Built by   MSYS2 project' --with-bugurl=https://sourceforge.net/projects/msys2 --with-gnu-as --with-gnu-ld --disable-sjlj-exceptions --with-dwarf2  
Thread model: posix
gcc version 7.4.0 (Rev1, Built by MSYS2 project)
```

Now you are ready to Compile and run  


###Compiling  

 Locate your program   
 I will be giving this example considering .c program  
 mcd into your desired directory where file is locate or type cmd in the adress bar     
 then type command   
 `gcc -o name name.c`  
 eg. gcc -o helloworld helloworld.c  
 The name after -o is the name given to exe file that is generated   
 Correct errors if any and run the above command again when done     
 If no errors are generated     
 Type `name`that is the name of your .exe     
 the program will have run    

        
###CODE::BLOCKS  
You could also download CODE::BLOCKS IDE which comes with the GCC compiler  
Download the binary release from [here](http://www.codeblocks.org/downloads)  
Download the one that says `mingw-setup.exe`  
Make sure that you dont have gcc previously installed in your computer   
Follow the instructions   
You will have to set the path manually as we did previously  
The bin lies in `C:\Program Files(x86)|CodeBlocks\MinGW\bin`  

[MinGW](http://www.mingw.org/)  
[MSYS2](http://www.msys2.org/)  
[GCC](https://gcc.gnu.org/)  
[CodeBlocks](http://www.codeblocks.org/)   
[More](https://github.com/orlp/dev-on-windows/wiki/Installing-GCC--&-MSYS2)   
[Installing CodeBlocks](https://www.journaldev.com/25757/c-compiler-windows-gcc)  


 Thank you  