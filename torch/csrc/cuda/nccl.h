#ifndef THCP_CUDA_NCCL_INC
#define THCP_CUDA_NCCL_INC
#include <Python.h>

PyObject * THCPModule_nccl_version(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_unique_id(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_init_rank(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_reduce(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_all_reduce(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_broadcast(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_all_gather(PyObject *self, PyObject *args);
PyObject * THCPModule_nccl_reduce_scatter(PyObject *self, PyObject *args);

#endif
