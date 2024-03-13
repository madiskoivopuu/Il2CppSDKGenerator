#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshCombine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshCombine"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& meshFilters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& newMesh() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MeshCombine*))(Il2CppBase() + 0x12CDB0C))(this);
	}
	template <typename T = void> T CreateMesh() {
		return ((T (*)(MeshCombine*))(Il2CppBase() + 0x12CDB10))(this);
	}
	template <typename T = Il2CppString*> T GetFullName() {
		return ((T (*)(MeshCombine*))(Il2CppBase() + 0x12CE91C))(this);
	}

};

