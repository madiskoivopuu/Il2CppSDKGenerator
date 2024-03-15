#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossEnrageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossEnrageView"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = EnrageTracker*> R& _tracker() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R UpdateView(int64_t startBattle, EnrageTracker* tracker) {
		return ((R (*)(HUDBossEnrageView*, int64_t, EnrageTracker*))(Il2CppBase() + 0x144BF18))(this, startBattle, tracker);
	}
	template <typename R = bool> R NeedShow(int64_t startBattle, int64_t now) {
		return ((R (*)(HUDBossEnrageView*, int64_t, int64_t))(Il2CppBase() + 0x144C314))(this, startBattle, now);
	}

};

