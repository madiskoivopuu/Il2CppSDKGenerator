#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatInfo"));
	}

	template <typename R = bool> R& HideOnArena() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& HideOnMap() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppString*> R& InnerName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R Contains(Il2CppString* filter) {
		return ((R (*)(CheatInfo*, Il2CppString*))(Il2CppBase() + 0x1138F74))(this, filter);
	}
	template <typename R = ECheatType*> R get_CheatType() {
		return ((R (*)(CheatInfo*))(Il2CppBase() + 0x0))(this);
	}

};

