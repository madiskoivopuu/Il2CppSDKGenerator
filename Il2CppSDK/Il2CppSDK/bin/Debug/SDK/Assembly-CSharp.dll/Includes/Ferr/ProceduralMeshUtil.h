#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ProceduralMeshUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ProceduralMeshUtil"));
	}

	template <typename R = Il2CppString*> static R& cProcMeshPrefix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R EnsureProceduralMesh(uintptr_t aFilter, bool aCreateRestoreComponent) {
		return ((R (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x16E468C))(0, aFilter, aCreateRestoreComponent);
	}
	template <typename R = bool> static R IsProceduralMesh(uintptr_t aFilter) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16E48E0))(0, aFilter);
	}
	template <typename R = Il2CppString*> static R MakeInstName(uintptr_t aFilter) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16E49E0))(0, aFilter);
	}
	template <typename R = bool> static R IsCorrectName(uintptr_t aFilter) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16E4AB4))(0, aFilter);
	}

};

}
