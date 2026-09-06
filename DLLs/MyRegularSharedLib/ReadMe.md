
# Link the .lib

In the EXE project:

*Project → Properties*

Go to:

```
Linker
   → General
      → Additional Library Directories
```

Add the directory containing:

```
MyRegularSharedLib.lib
```

Then:

```
Linker
   → Input
      → Additional Dependencies
```

Add:

```
MyRegularSharedLib.lib
```