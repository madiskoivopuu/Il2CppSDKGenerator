#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "CheatInfo" 

class ToggleCheatInfo: CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleCheatInfo"));
	}

	template <typename T = void*> T& Getter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Setter() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_CheatType() {
		return ((T (*)(ToggleCheatInfo*))(Il2CppBase() + 0x11390F4))(this);
	}

};

}
