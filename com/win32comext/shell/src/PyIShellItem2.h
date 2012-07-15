// This file declares the IShellItem2 Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIShellItem2 : public PyIShellItem
{
public:
	MAKE_PYCOM_CTOR(PyIShellItem2);
	static IShellItem2 *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *GetPropertyStore(PyObject *self, PyObject *args);
	static PyObject *GetPropertyStoreWithCreateObject(PyObject *self, PyObject *args);
	static PyObject *GetPropertyStoreForKeys(PyObject *self, PyObject *args);
	static PyObject *GetPropertyDescriptionList(PyObject *self, PyObject *args);
	static PyObject *Update(PyObject *self, PyObject *args);
	static PyObject *GetProperty(PyObject *self, PyObject *args);
	static PyObject *GetCLSID(PyObject *self, PyObject *args);
	static PyObject *GetFileTime(PyObject *self, PyObject *args);
	static PyObject *GetInt32(PyObject *self, PyObject *args);
	static PyObject *GetString(PyObject *self, PyObject *args);
	static PyObject *GetUInt32(PyObject *self, PyObject *args);
	static PyObject *GetUInt64(PyObject *self, PyObject *args);
	static PyObject *GetBool(PyObject *self, PyObject *args);

protected:
	PyIShellItem2(IUnknown *pdisp);
	~PyIShellItem2();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGShellItem2 : public PyGShellItem, public IShellItem2
{
protected:
	PyGShellItem2(PyObject *instance) : PyGShellItem(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGShellItem2, IShellItem2, IID_IShellItem2, PyGShellItem)

	// IShellItem2
	STDMETHOD(GetPropertyStore)(
		GETPROPERTYSTOREFLAGS flags,
		__RPC__in REFIID riid,
		__RPC__deref_out_opt void ** ppv);

	STDMETHOD(GetPropertyStoreWithCreateObject)(
		GETPROPERTYSTOREFLAGS flags,
		__RPC__in_opt IUnknown * punkCreateObject,
		__RPC__in REFIID riid,
		__RPC__deref_out_opt void ** ppv);

	STDMETHOD(GetPropertyStoreForKeys)(
		__RPC__in_ecount_full(cKeys) const PROPERTYKEY * rgKeys,
		UINT cKeys,
		GETPROPERTYSTOREFLAGS flags,
		__RPC__in REFIID riid,
		__RPC__deref_out_opt void ** ppv);

	STDMETHOD(GetPropertyDescriptionList)(
		__RPC__in REFPROPERTYKEY keyType,
		__RPC__in REFIID riid,
		__RPC__deref_out_opt void ** ppv);

	STDMETHOD(Update)(
		__RPC__in_opt IBindCtx * pbc);

	STDMETHOD(GetProperty)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out PROPVARIANT * ppropvar);

	STDMETHOD(GetCLSID)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out CLSID * pclsid);

	STDMETHOD(GetFileTime)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out FILETIME * pft);

	STDMETHOD(GetInt32)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out int * pi);

	STDMETHOD(GetString)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__deref_out_opt_string LPWSTR * ppsz);

	STDMETHOD(GetUInt32)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out ULONG * pui);

	STDMETHOD(GetUInt64)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out ULONGLONG * pull);

	STDMETHOD(GetBool)(
		__RPC__in REFPROPERTYKEY key,
		__RPC__out BOOL * pf);


	// IShellItem methods have to be implemented due to double inheritance from IShellItem
	// thru IShellItem2 and PyGShellItem
	STDMETHOD(BindToHandler)(
		IBindCtx * pbc,
		REFGUID bhid,
		REFIID riid,
		void ** ppv)
		{return PyGShellItem::BindToHandler(pbc, bhid, riid, ppv);}

	STDMETHOD(GetParent)(IShellItem ** ppsi)
		{return PyGShellItem::GetParent(ppsi);}

	STDMETHOD(GetDisplayName)(SIGDN sigdnName, LPWSTR * ppszName)
		{return PyGShellItem::GetDisplayName(sigdnName, ppszName);}

	STDMETHOD(GetAttributes)(SFGAOF sfgaoMask, SFGAOF * psfgaoAttribs)
		{return PyGShellItem::GetAttributes(sfgaoMask, psfgaoAttribs);}

	STDMETHOD(Compare)(IShellItem * psi, SICHINTF hint, int * piOrder)
		{return PyGShellItem::Compare(psi, hint, piOrder);}

};
