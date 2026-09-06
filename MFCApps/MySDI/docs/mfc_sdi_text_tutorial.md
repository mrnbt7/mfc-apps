# MFC SDI Text Rendering & Serialization Tutorial

Here is a simple, step-by-step example showing how to store a line of text in your Document, type it out, and use the View to paint it on the screen.

---

## 📝 Step 1: Update the Document Header (MyProjectDoc.h)
First, open your document header file. We need to create a `CString` variable to hold the text.

```cpp
class CMySDIDoc : public CDocument
{
// Attributes
public:
    CString m_strDisplayDocText; // 👈 Add this line to hold your text
    
    // ... rest of the automatically generated code ...
};
```

---

## 🎨 Step 2: Initialize the Text (MyProjectDoc.cpp)
Open your document source file. Find the `OnNewDocument` function. This function runs whenever the user creates a new file. Give your text a starting message here.

```cpp
BOOL CMySDIDoc::OnNewDocument()
{
    if (!CDocument::OnNewDocument())
        return FALSE;

    // 👈 Set a default starting message
    m_strDisplayDocText = _T("Hello! This text is stored in the Document.");

    return TRUE;
}
```

---

## 🖨️ Step 3: Draw the Text on the View (MyProjectView.cpp)
Open your view source file. Find the `OnDraw` function. This is where all the screen painting happens. The framework automatically sets up a pointer to your document called `pDoc`.
We will grab the text variable from `pDoc` and draw it on the screen using the device context (`pDC`).

```cpp
void CMySDIView::OnDraw(CDC* pDC)
{
    CMySDIDoc* pDoc = GetDocument();
    ASSERT_VALID(pDoc);
    if (!pDoc)
        return;

    // 👈 2. Ask the device context to draw the text string from the document
	pDC->TextOutW(100, 100, pDoc->m_strDisplayDocText);
}
```

---

## 💾 Step 4: Add Serialization (MyProjectDoc.cpp)
To make sure this text gets saved to a file and loaded back correctly when you use File -> Save or File -> Open, update the `Serialize` function in your document source file.

```cpp
void CMySDIDoc::Serialize(CArchive& ar)
{
    if (ar.IsStoring())
    {
        // 💾 SAVING: Send the text to the file archive
        ar << m_strDisplayDocText;
    }
    else
    {
        // 📂 LOADING: Pull the text out of the file archive
        ar >> m_strDisplayDocText;
    }
}
```

---

## 🔄 How It Works Behind the Scenes

* **App Initialization:** When the app starts, `OnNewDocument` loads the starter text into `m_strDisplayDocText`.
* **Screen Painting:** The window opens, and Windows tells the view to paint itself by calling `OnDraw`.
* **Document Access:** `OnDraw` visits the document, copies the text, and displays it via `pDC->TextOut`.
* **File Operations:** If you open a saved file, the MFC framework updates `m_strDisplayDocText` via the `Serialize` function, and then tells the view to redraw itself with the brand-new text.