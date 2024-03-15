#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshCombine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshCombine"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& meshFilters() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& newMesh() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(MeshCombine*))(Il2CppBase() + 0x12CDB0C))(this);
	}
	template <typename R = void> R CreateMesh() {
		return ((R (*)(MeshCombine*))(Il2CppBase() + 0x12CDB10))(this);
	}
	template <typename R = Il2CppString*> R GetFullName() {
		return ((R (*)(MeshCombine*))(Il2CppBase() + 0x12CE91C))(this);
	}

};

