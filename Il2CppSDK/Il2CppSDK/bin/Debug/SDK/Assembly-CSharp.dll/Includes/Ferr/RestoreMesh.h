#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RestoreMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RestoreMesh"));
	}

	template <typename R = uintptr_t> R& _originalMesh() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R get_OriginalMesh() {
		return ((R (*)(RestoreMesh*))(Il2CppBase() + 0x119D284))(this);
	}
	template <typename R = void> R set_OriginalMesh(uintptr_t value) {
		return ((R (*)(RestoreMesh*, uintptr_t))(Il2CppBase() + 0x119D28C))(this, value);
	}
	template <typename R = void> R Restore(bool aMaintainColors) {
		return ((R (*)(RestoreMesh*, bool))(Il2CppBase() + 0x119D294))(this, aMaintainColors);
	}

};

}
