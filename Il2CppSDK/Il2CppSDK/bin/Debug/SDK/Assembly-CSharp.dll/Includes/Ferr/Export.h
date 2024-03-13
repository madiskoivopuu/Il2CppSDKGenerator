#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class Export
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "Export"));
	}


	template <typename T = void> static T SaveOBJ(uintptr_t aMesh, Il2CppString* aFileName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1685864))(0, aMesh, aFileName);
	}
	template <typename T = void> static T SavePLY(uintptr_t aMesh, Il2CppString* aFileName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1685C58))(0, aMesh, aFileName);
	}

};

}
