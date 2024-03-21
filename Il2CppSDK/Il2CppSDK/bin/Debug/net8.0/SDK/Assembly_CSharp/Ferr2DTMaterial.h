#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/ScriptableObject.h"
#include "Ferr2DTTerrainDirection.h"
#include "../UnityEngine_CoreModule/UnityEngine/Rect.h"

class Ferr2DTSegmentDescription*;
namespace UnityEngine { class Material; }

class Ferr2DTMaterial : public ScriptableObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_Material"));
	}

	UnityEngine::Material*& _fillMaterial() {
		return *(UnityEngine::Material**)((uintptr_t)this + 0x18);
	}

	UnityEngine::Material*& _edgeMaterial() {
		return *(UnityEngine::Material**)((uintptr_t)this + 0x20);
	}

	Il2CppArray<Ferr2DTSegmentDescription*>*& _descriptors() {
		return *(Il2CppArray<Ferr2DTSegmentDescription*>**)((uintptr_t)this + 0x28);
	}

	bool& isPixel() {
		return *(bool*)((uintptr_t)this + 0x30);
	}

};};
