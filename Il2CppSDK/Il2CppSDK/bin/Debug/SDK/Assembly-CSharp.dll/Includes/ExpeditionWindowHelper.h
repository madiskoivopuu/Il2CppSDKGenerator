#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpeditionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowExpedition(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16849D8))(0, manager, dialogueEntity);
	}

};

}
