#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenStateComponent"));
	}

	template <typename T = int32_t> T& OpenPortalProgress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsPortalOpen() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& CurrentOpenBoss() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& States() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_Item(Il2CppString* blueprint) {
		return ((T (*)(BossOpenStateComponent*, Il2CppString*))(Il2CppBase() + 0x16CBC94))(this, blueprint);
	}
	template <typename T = void> T set_Item(Il2CppString* blueprint, uintptr_t value) {
		return ((T (*)(BossOpenStateComponent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x16CC31C))(this, blueprint, value);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BossOpenStateComponent*, uintptr_t))(Il2CppBase() + 0x16CC470))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BossOpenStateComponent*, uintptr_t))(Il2CppBase() + 0x16CC528))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BossOpenStateComponent*, uintptr_t))(Il2CppBase() + 0x16CC774))(this, writer);
	}

};

}
