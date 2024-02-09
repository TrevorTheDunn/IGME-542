#include <memory>

#include "Mesh.h"
#include "Transform.h"

#pragma once
class GameEntity
{
public:
	GameEntity(std::shared_ptr<Mesh> mesh);

	std::shared_ptr<Mesh> GetMesh();
	Transform* GetTransform();

	void SetMesh(std::shared_ptr<Mesh> mesh);

private:
	std::shared_ptr<Mesh> mesh;
	Transform transform;
};