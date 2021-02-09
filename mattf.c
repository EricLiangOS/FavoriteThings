#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject* mattf_printfavs(PyObject* self, PyObject* args) {
	puts("test 123 if this works I'm a literal god");
	Py_RETURN_NONE;
};

static PyMethodDef MattFMethods[] = {
	{"printfavs", mattf_printfavs, METH_VARARGS, "Print favorites."},
	{NULL, NULL, 0, NULL} // sentinel
};

static struct PyModuleDef mattfmodule = {
	PyModuleDef_HEAD_INIT,
	"mattf",
	NULL,
	-1,
	MattFMethods
};

PyMODINIT_FUNC PyInit_mattf(void) {
	return PyModule_Create(&mattfmodule);
};
