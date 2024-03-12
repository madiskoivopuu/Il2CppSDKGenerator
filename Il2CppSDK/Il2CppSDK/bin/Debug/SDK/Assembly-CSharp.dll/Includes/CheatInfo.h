#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatInfo"));
	}

	template <typename T = bool> T& HideOnArena() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& HideOnMap() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppString*> T& InnerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T Contains(Il2CppString* filter) {
		return ((T (*)(CheatInfo*, Il2CppString*))(Il2CppBase() + 0x1138F74))(this, filter);
	}
	template <typename T = uintptr_t> T get_CheatType() {
		return ((T (*)(CheatInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
