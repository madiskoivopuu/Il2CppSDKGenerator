#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent`1" 

class FloatListComponent: TypeArrayComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatListComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FloatListComponent*, uintptr_t))(Il2CppBase() + 0x15F7190))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FloatListComponent*, uintptr_t))(Il2CppBase() + 0x15F7200))(this, writer);
	}

};

}
