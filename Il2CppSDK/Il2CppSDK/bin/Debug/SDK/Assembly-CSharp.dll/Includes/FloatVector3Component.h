#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeVector3Component`1" 

class FloatVector3Component: TypeVector3Component1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatVector3Component"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FloatVector3Component*, uintptr_t))(Il2CppBase() + 0x15F7838))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FloatVector3Component*, uintptr_t))(Il2CppBase() + 0x15F7900))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(FloatVector3Component*, uintptr_t))(Il2CppBase() + 0x15F7954))(this, blueprintComponent);
	}

};

}
