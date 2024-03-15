#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameViewLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameViewLink"));
	}

	template <typename R = Il2CppString*> R& path() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& viewObject() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

