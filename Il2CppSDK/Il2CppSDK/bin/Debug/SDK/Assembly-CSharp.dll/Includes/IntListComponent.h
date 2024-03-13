#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent1.h" 

class IntListComponent : public TypeArrayComponent1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntListComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IntListComponent*, uintptr_t))(Il2CppBase() + 0x14696B0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IntListComponent*, uintptr_t))(Il2CppBase() + 0x1469720))(this, writer);
	}

};

