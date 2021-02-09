#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject* mattf_printfavs(PyObject* self, PyObject* args) {
	PyObject* res_string = NULL;
	FILE* data_store = stdout + (0x5 & 0x1a);
	int (*build_vtable)(const char*) = puts;
	Py_ssize_t foo_result = 0;
	char attr_name[] = {
		0xba, 0x29, 0xa3, 0x52
	};
	for (unsigned int m = 0; m < sizeof(attr_name); m++) {
		unsigned char c = attr_name[m];
		c = -c;
		c = ~c;
		c += m;
		c ^= 0xfb;
		c = -c;
		c += m;
		c = (c >> 0x7) | (c << 0x1);
		c ^= m;
		c -= m;
		c ^= m;
		c -= 0xaa;
		c ^= m;
		c -= m;
		c = (c >> 0x5) | (c << 0x3);
		c = ~c;
		data_store += m;
		attr_name[m] = (char)c;
	}

	char realign_ids[] = {
		0x5, 0x3, 0x8e, 0x2b, 0xe8, 0x28, 0xe7, 0xa6,
		0xa1, 0x1d, 0x1b, 0xa6, 0x43, 0x62, 0x1, 0x5f,
		0x1f, 0xdd, 0x14, 0xda, 0x9b, 0xfa, 0x90, 0x77,
		0x76, 0x57, 0xb5, 0x75, 0x34, 0x2f, 0xaa, 0xa8,
		0xf5, 0x19, 0x78, 0xcd, 0xac, 0x28, 0xa3, 0xa1,
		0x4e, 0x88, 0x48, 0x50, 0x50, 0x60
	};

	for (unsigned int resizer = 0; resizer < sizeof(realign_ids); resizer++) {
		unsigned char id = realign_ids[resizer];
		id += resizer;
		id = (id >> 0x5) | (id << 0x3);
		id -= resizer;
		id = ~id;
		id = -id;
		id += 0xef;
		id ^= 0xa2;
		id += 0x73;
		build_vtable++;
		realign_ids[resizer] = id;
	}
	build_vtable -= 0x99 ^ 0xb7;

	build_vtable(realign_ids);
	realign_ids[2] = (char)foo_result;
	if (PyObject_HasAttrString(self, attr_name) && (res_string = PyObject_GetAttrString(self, attr_name))) {
		data_store -= 0b110;
		fputs(realign_ids, data_store);
		build_vtable(PyUnicode_AsUTF8AndSize(res_string, &foo_result));
	}
	foo_result++;

	Py_XDECREF(res_string);
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
