#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossEnrageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossEnrageView"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _tracker() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T UpdateView(int64_t startBattle, uintptr_t tracker) {
		return ((T (*)(HUDBossEnrageView*, int64_t, uintptr_t))(Il2CppBase() + 0x144BF18))(this, startBattle, tracker);
	}
	template <typename T = bool> T NeedShow(int64_t startBattle, int64_t now) {
		return ((T (*)(HUDBossEnrageView*, int64_t, int64_t))(Il2CppBase() + 0x144C314))(this, startBattle, now);
	}

};

}
