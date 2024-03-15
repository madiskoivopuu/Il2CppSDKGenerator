#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenStateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenStateData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& OpenPortalProgress() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = bool> R& IsPortalOpen() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& CurrentOpenBoss() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<BossState*>*> R& States() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BossOpenStateData*, uintptr_t))(Il2CppBase() + 0x16CC8A8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BossOpenStateData*, uintptr_t))(Il2CppBase() + 0x16CC99C))(this, reader);
	}

};

