#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExternalInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExternalInventory"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ExternalInventory*, uintptr_t))(Il2CppBase() + 0x168AA24))(this, target);
	}

};

}
