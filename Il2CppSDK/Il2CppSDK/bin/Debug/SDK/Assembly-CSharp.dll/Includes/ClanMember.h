#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanMember
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanMember"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& _clanId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& _cellId() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Bind(uintptr_t window, int64_t clanId, unsigned char cellId) {
		return ((T (*)(ClanMember*, uintptr_t, int64_t, unsigned char))(Il2CppBase() + 0x1596394))(this, window, clanId, cellId);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanMember*, float))(Il2CppBase() + 0x15964AC))(this, deltaTime);
	}

};

}
