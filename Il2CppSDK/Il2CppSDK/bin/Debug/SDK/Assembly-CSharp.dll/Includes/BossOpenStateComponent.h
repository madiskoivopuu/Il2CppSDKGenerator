#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenStateComponent"));
	}

	template <typename R = int32_t> R& OpenPortalProgress() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsPortalOpen() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& CurrentOpenBoss() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<BossState>*& States() {
		return *(Il2CppList<BossState>**)((uintptr_t)this + 0x20);
	}

	template <typename R = BossState> R get_Item(Il2CppString* blueprint) {
		return ((R (*)(BossOpenStateComponent*, Il2CppString*))(Il2CppBase() + 0x16CBC94))(this, blueprint);
	}
	template <typename R = void> R set_Item(Il2CppString* blueprint, BossState value) {
		return ((R (*)(BossOpenStateComponent*, Il2CppString*, BossState))(Il2CppBase() + 0x16CC31C))(this, blueprint, value);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BossOpenStateComponent*, Il2CppObject*))(Il2CppBase() + 0x16CC470))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BossOpenStateComponent*, uintptr_t))(Il2CppBase() + 0x16CC528))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BossOpenStateComponent*, uintptr_t))(Il2CppBase() + 0x16CC774))(this, writer);
	}

};

