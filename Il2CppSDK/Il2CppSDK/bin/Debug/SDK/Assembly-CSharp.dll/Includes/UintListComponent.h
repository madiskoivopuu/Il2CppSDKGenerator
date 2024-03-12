#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent`1" 

class UintListComponent: TypeArrayComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintListComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UintListComponent*, uintptr_t))(Il2CppBase() + 0x1536928))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UintListComponent*, uintptr_t))(Il2CppBase() + 0x1536998))(this, writer);
	}

};

}
