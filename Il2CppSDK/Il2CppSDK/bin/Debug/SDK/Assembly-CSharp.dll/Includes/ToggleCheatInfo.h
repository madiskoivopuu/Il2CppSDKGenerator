#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToggleCheatInfo : public CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToggleCheatInfo"));
	}

	 Func1bool>*& Getter() {
		return *(Func1bool>**)((uintptr_t)this + 0x20);
	}
	 Action1bool>*& Setter() {
		return *(Action1bool>**)((uintptr_t)this + 0x28);
	}

	template <typename R = ECheatType*> R get_CheatType() {
		return ((R (*)(ToggleCheatInfo*))(Il2CppBase() + 0x11390F4))(this);
	}

};

