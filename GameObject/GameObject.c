#include "GameObject.h"

GameObject		*create_empty_gameobject(const Vector2 *position)
{
  GameObject		*gameobject = malloc(sizeof(GameObject));

  gameobject->transform.parent = NULL;
  gameobject->transform.position = *position;
  gameobject->components = NULL;
  return (gameobject);
}

GameObject		*instantiate(const Prefab *object)
{
  GameObject		*gameobject = malloc(sizeof(GameObject));

  gameobject->transform = object->transform;
  //COMPONENTS:
  return (gameobject);
}
