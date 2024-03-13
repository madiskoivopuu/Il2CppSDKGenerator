#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RestoreMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RestoreMesh"));
	}

	template <typename T = uintptr_t> T& _originalMesh() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_OriginalMesh() {
		return ((T (*)(RestoreMesh*))(Il2CppBase() + 0x119D284))(this);
	}
	template <typename T = void> T set_OriginalMesh(uintptr_t value) {
		return ((T (*)(RestoreMesh*, uintptr_t))(Il2CppBase() + 0x119D28C))(this, value);
	}
	template <typename T = void> T Restore(bool aMaintainColors) {
		return ((T (*)(RestoreMesh*, bool))(Il2CppBase() + 0x119D294))(this, aMaintainColors);
	}

};

}
