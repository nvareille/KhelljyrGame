#ifndef GAMEOBJECT_H_
# define GAMEOBJECT_H_

# include <pebble.h>
# include "../Types/Vector2/Vector2.h"
# include "../Component/Component.h"
# include "Transform.h"
# include "../Prefab/Prefab.h"

struct				GameObject;

typedef struct			GameObject
{
  Transform			transform;
  Component			*components;
}				GameObject;

GameObject		*create_empty_gameobject(const Vector2 *position);
GameObject		*instantiate(const Prefab *object);

#endif
