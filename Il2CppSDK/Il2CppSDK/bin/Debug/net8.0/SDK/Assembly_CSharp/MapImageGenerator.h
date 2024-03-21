#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Vector2Int.h"

class ClientDataContexts*;
class EntityBlueprint*;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

class MapImageGenerator : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapImageGenerator"));
	}

	Il2CppString*& worldFile() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& locationFile() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& outputPath() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	UnityEngine::Vector2Int& worldSize() {
		return *(UnityEngine::Vector2Int*)((uintptr_t)this + 0x30);
	}

	int32_t& imageSize() {
		return *(int32_t*)((uintptr_t)this + 0x38);
	}

	bool& drawMobs() {
		return *(bool*)((uintptr_t)this + 0x3C);
	}

	UnityEngine::Camera*& mainCamera() {
		return *(UnityEngine::Camera**)((uintptr_t)this + 0x40);
	}

	UnityEngine::RenderTexture*& renderTexture() {
		return *(UnityEngine::RenderTexture**)((uintptr_t)this + 0x48);
	}

	ClientDataContexts*& _contexts() {
		return *(ClientDataContexts**)((uintptr_t)this + 0x50);
	}

	static Il2CppString*& NONE_PREFAB() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& EMPTY_PREFAB() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

};};
