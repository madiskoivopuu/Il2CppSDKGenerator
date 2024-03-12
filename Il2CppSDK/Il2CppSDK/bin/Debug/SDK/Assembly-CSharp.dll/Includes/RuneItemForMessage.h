#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ItemForMessage" 

class RuneItemForMessage: ItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemForMessage"));
	}


	template <typename T = void> T SetGrade(uintptr_t item) {
		return ((T (*)(RuneItemForMessage*, uintptr_t))(Il2CppBase() + 0x13538DC))(this, item);
	}

};

}
