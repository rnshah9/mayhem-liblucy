#ifndef LUCY_SCOPE_H_
#define LUCY_SCOPE_H_

#include "node.h"

typedef struct Scope {
  struct Scope* parent;
  Node* node;
} Scope;

#endif