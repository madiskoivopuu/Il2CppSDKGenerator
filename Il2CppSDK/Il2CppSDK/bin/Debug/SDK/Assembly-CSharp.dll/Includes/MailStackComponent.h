#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailStackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailStackComponent"));
	}

	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MailStackComponent*, uintptr_t))(Il2CppBase() + 0x125F5A0))(this, targetObject);
	}

};

}
