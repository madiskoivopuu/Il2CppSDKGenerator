#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshFilter; }

class MeshCombine : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshCombine"));
	}

	Il2CppArray<MeshFilter*>*& meshFilters() {
		return *(Il2CppArray<MeshFilter*>**)((uintptr_t)this + 0x18);
	}

	UnityEngine::MeshFilter*& newMesh() {
		return *(UnityEngine::MeshFilter**)((uintptr_t)this + 0x20);
	}

};};
