#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "CheatInfo.h" 

class ToggleCheatInfo : public CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleCheatInfo"));
	}

	template <typename T = Func1bool>*> T& Getter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1bool>*> T& Setter() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ECheatType*> T get_CheatType() {
		return ((T (*)(ToggleCheatInfo*))(Il2CppBase() + 0x11390F4))(this);
	}

};

