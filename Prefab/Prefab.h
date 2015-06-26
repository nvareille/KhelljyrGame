#ifndef PREFAB_H_
# define PREFAB_H_

# include "../GameObject/GameObject.h"

typedef struct		Prefab
{
  Transform		transform;
  Component		*components[];
}			Prefab;

#endif
