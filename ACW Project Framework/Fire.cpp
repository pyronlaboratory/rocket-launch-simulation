#include "Fire.h"

Fire::Fire(
	ID3D11Device* const device, 
	HWND const hwnd, 
	const ModelType modelType, 
	const XMFLOAT3& initialPosition, 
	const XMFLOAT3& initialScale, 
	const XMFLOAT3& finalScale, 
	const float transparency, 
	const float lifeCycle, 
	const float velocity, 
	const int particleDensity, 
	const shared_ptr<ResourceManager>& resourceManager
) :
	ParticleSystem(
		device, 
		hwnd, 
		modelType, 
		initialPosition, 
		initialScale, 
		finalScale, 
		XMFLOAT3(0.7f, 0.3f, 0.0f), 
		L"IceColour.dds", 
		transparency, 
		lifeCycle, 
		velocity, 
		particleDensity, 
		resourceManager
	) { }

void Fire::Update(const float dt)
{
	ParticleSystem::Update(dt);
}

bool Fire::Render(
	ID3D11DeviceContext* const deviceContext, 
	const XMMATRIX& viewMatrix, 
	const XMMATRIX& projectionMatrix, 
	const XMFLOAT3& cameraPosition
) const
{
	return ParticleSystem::Render(deviceContext, viewMatrix, projectionMatrix, cameraPosition);
}
