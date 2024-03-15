#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanMember
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanMember"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = DiplomacyWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& _clanId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uint8_t> R& _cellId() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Bind(DiplomacyWindow* window, int64_t clanId, uint8_t cellId) {
		return ((R (*)(ClanMember*, DiplomacyWindow*, int64_t, uint8_t))(Il2CppBase() + 0x1596394))(this, window, clanId, cellId);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanMember*, float))(Il2CppBase() + 0x15964AC))(this, deltaTime);
	}

};

