#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent`1" 

class LongListComponent: TypeArrayComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongListComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LongListComponent*, uintptr_t))(Il2CppBase() + 0x17323DC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LongListComponent*, uintptr_t))(Il2CppBase() + 0x173244C))(this, writer);
	}

};

}
