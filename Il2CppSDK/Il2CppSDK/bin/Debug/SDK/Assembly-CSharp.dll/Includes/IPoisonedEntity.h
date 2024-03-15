#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPoisonedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPoisonedEntity"));
	}


	template <typename R = bool> R get_isPoisoned() {
		return ((R (*)(IPoisonedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isPoisoned(bool value) {
		return ((R (*)(IPoisonedEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

