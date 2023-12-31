#include "Smoke.h"

Smoke::Smoke(
	ID3D11Device* const device, 
	HWND const hwnd, 
	const XMFLOAT3& initialPosition, 
	const XMFLOAT3& initialScale, 
	const XMFLOAT3& scaleReduction, 
	const XMFLOAT3& killScale, 
	const float transparency, 
	const float spawnRate, 
	const float velocity, 
	const shared_ptr<ResourceManager>& resourceManager
) :
	ParticleSystem(
		device, 
		hwnd, 
		initialPosition, 
		initialScale, 
		scaleReduction, 
		killScale, 
		XMFLOAT3(0.7f, 0.7f, 0.7f), 
		L"IceColour.dds", 
		transparency, 
		spawnRate, 
		velocity, 
		resourceManager
	) { }

void Smoke::Update(const float dt)
{
	ParticleSystem::Update(dt);
}

bool Smoke::Render(
	ID3D11DeviceContext* const deviceContext, 
	const XMMATRIX& viewMatrix, 
	const XMMATRIX& projectionMatrix, 
	const XMFLOAT3& cameraPosition
) const
{
	return ParticleSystem::Render(deviceContext, viewMatrix, projectionMatrix, cameraPosition);
}
