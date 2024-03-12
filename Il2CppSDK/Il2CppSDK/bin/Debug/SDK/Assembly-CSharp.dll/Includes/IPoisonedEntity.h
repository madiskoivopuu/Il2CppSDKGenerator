#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPoisonedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPoisonedEntity"));
	}


	template <typename T = bool> T get_isPoisoned() {
		return ((T (*)(IPoisonedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isPoisoned(bool value) {
		return ((T (*)(IPoisonedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
