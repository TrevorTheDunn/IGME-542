#include "GameEntity.h"

GameEntity::GameEntity(std::shared_ptr<Mesh> mesh)
{
    this->mesh = mesh;
}

std::shared_ptr<Mesh> GameEntity::GetMesh() { return this->mesh; }

Transform* GameEntity::GetTransform() { return &transform; }

void GameEntity::SetMesh(std::shared_ptr<Mesh> mesh) { this->mesh = mesh; }