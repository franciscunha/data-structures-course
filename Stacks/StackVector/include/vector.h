#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct vector DynVector;

DynVector *dv_create(int dim);
void dv_push_back(DynVector *vec, float x);
void dv_pop_back(DynVector *vec);
int dv_size(DynVector *vec);
int dv_get(DynVector *vec, int pos, float *v);
void dv_free(DynVector *vec);

#endif