from distutils.core import setup, Extension
from Cython.Build import cythonize


sources = [
    "mycalc.pyx",
    "sample.cpp",
]
name = "mycalc"
ext = Extension(name, sources=sources, include_dirs=["."])

setup(
    name=name,
    ext_modules=cythonize([ext], compiler_directives={"language_level": "3"}),
)
