#pragma once
#include <DirectXMath.h>
#include <fstream>
#include <AntTweakBar.h>
#include <d3d11.h>

using namespace DirectX;
using namespace std;

class ConfigurationManager
{
public:
	explicit ConfigurationManager(const char* const configurationFileName);
	~ConfigurationManager();

	ConfigurationManager(const ConfigurationManager& other) = default;
	ConfigurationManager(ConfigurationManager && other) noexcept = default;
	ConfigurationManager& operator = (const ConfigurationManager& other) = default;
	ConfigurationManager& operator = (ConfigurationManager&& other) noexcept = default;

	const XMFLOAT3& GetCameraPosition() const;

	const XMFLOAT3& GetTerrainDimensions() const;
	const XMFLOAT3& GetTerrainScale() const;

	const XMFLOAT3& GetRocketPosition() const;
	const XMFLOAT3& GetRocketRotation() const;
	const XMFLOAT3& GetRocketScale() const;

	const XMFLOAT4& GetSunAmbient() const;
	const XMFLOAT4& GetSunDiffuse() const;
	const XMFLOAT4& GetSunSpecular() const;
	const float GetSunSpecularPower() const;

	const XMFLOAT4& GetMoonAmbient() const;
	const XMFLOAT4& GetMoonDiffuse() const;
	const XMFLOAT4& GetMoonSpecular() const;
	const float GetMoonSpecularPower() const;

	const XMFLOAT3& GetLaunchPadScale() const;
	const XMFLOAT4& GetLaunchPadTessellationValues() const;
	const XMFLOAT4& GetLaunchPadDisplacementValues() const;
private:

	XMFLOAT3 m_cameraPosition;

	XMFLOAT3 m_terrainDimensions;
	XMFLOAT3 m_terrainScale;

	XMFLOAT3 m_rocketPosition;
	XMFLOAT3 m_rocketRotation;
	XMFLOAT3 m_rocketScale;

	XMFLOAT4 m_sunAmbient;
	XMFLOAT4 m_sunDiffuse;
	XMFLOAT4 m_sunSpecular;
	float m_sunSpecularPower;

	XMFLOAT4 m_moonAmbient;
	XMFLOAT4 m_moonDiffuse;
	XMFLOAT4 m_moonSpecular;
	float m_moonSpecularPower;

	XMFLOAT3 m_launchPadScale;
	XMFLOAT4 m_launchPadTessellationValues;
	XMFLOAT4 m_launchPadDisplacementValues;

	TwBar* m_antTweakBarConfigData;
};

