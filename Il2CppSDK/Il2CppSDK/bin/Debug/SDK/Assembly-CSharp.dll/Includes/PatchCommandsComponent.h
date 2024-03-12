#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent`1" 

class PatchCommandsComponent: TypeListComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommandsComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PatchCommandsComponent*, uintptr_t))(Il2CppBase() + 0x11E9914))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PatchCommandsComponent*, uintptr_t))(Il2CppBase() + 0x11E9AA8))(this, writer);
	}

};

}
