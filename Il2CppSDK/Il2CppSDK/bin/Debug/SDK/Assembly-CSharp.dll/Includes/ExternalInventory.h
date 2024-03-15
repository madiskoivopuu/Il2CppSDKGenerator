#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExternalInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExternalInventory"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ExternalInventory*, Il2CppObject*))(Il2CppBase() + 0x168AA24))(this, target);
	}

};

