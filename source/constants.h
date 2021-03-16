/*
Copyright (c) 2013 Ben Croston

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#define PY_PUD_CONST_OFFSET 20
#define PY_EVENT_CONST_OFFSET 30

PyObject *high;
PyObject *low;
PyObject *input;
PyObject *output;
PyObject *pud_off;
PyObject *pud_up;
PyObject *pud_down;
PyObject *rising_edge;
PyObject *falling_edge;
PyObject *both_edge;
PyObject *unknown;
PyObject *board;
PyObject *bcm;
PyObject *soc;
PyObject *version;
PyObject *bunknown;
PyObject *bzeroh2;
PyObject *bzeroh5;
PyObject *bzeroplus3;
PyObject *bpc;
PyObject *bpc2;
PyObject *bprime;
PyObject *bh616;
PyObject *blite2;
PyObject *bpi3;


void define_constants(PyObject *module);
