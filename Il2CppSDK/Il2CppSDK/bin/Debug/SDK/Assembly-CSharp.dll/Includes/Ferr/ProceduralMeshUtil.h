#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ProceduralMeshUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ProceduralMeshUtil"));
	}

	template <typename T = Il2CppString*> static T& cProcMeshPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T EnsureProceduralMesh(uintptr_t aFilter, bool aCreateRestoreComponent) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x16E468C))(0, aFilter, aCreateRestoreComponent);
	}
	template <typename T = bool> static T IsProceduralMesh(uintptr_t aFilter) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16E48E0))(0, aFilter);
	}
	template <typename T = Il2CppString*> static T MakeInstName(uintptr_t aFilter) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16E49E0))(0, aFilter);
	}
	template <typename T = bool> static T IsCorrectName(uintptr_t aFilter) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16E4AB4))(0, aFilter);
	}

};

}
