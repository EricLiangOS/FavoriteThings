from distutils.core import setup, Extension

mattfmodule = Extension('mattf', sources=['mattf.c'])

setup(name='MattFModule', version='1.0', description="Matt's Favorites", ext_modules=[mattfmodule])
