# Extension vs Regular Dlls

```
Regular MFC DLL
       │
       ├── CWinApp
       ├── MFC Shared DLL
       ├── __declspec(dllexport)
       ├── AFX_MANAGE_STATE()
       └── C-style API
```

```
MFC Extension DLL
       │
       ├── No CWinApp
       ├── MFC Shared DLL
       ├── AFX_EXT_CLASS
       └── Export MFC-derived classes
```

```
Static MFC DLL
    ↓
No AFX_MANAGE_STATE()

Shared MFC DLL
    ↓
Use AFX_MANAGE_STATE()
```

A Regular MFC DLL can be consumed by MFC and non-MFC applications, whereas an Extension DLL is specifically intended for MFC clients using shared MFC.

For your calculator, Regular MFC Shared DLL is a very good example because it teaches the DLL boundary, exported API, .lib/.dll, AFX_MANAGE_STATE, and MFC shared runtime without introducing MFC class-export complexity.

## Regular MFC Shared DLL vs Regular MFC Static DLL

### Regular MFC Shared DLL

```
CalculatorMfcDll.dll
        │
        ├── Your code
        │
        └── Uses
             │
             ▼
        Shared MFC DLL
```
Requires the appropriate MFC runtime DLLs.

### Regular MFC Static DLL

```
MyRegularStaticallyLinkedLib.dll
        │
        ├── Your code
        │
        └── MFC code
             │
             └── Linked into DLL
```

No dependency on the shared MFC DLL for that DLL.

Microsoft notes that static linking increases DLL size because each DLL gets its own copy of the MFC code it uses.

