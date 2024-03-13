#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOpenStateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOpenStateData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& OpenPortalProgress() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& IsPortalOpen() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& CurrentOpenBoss() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& States() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BossOpenStateData*, uintptr_t))(Il2CppBase() + 0x16CC8A8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BossOpenStateData*, uintptr_t))(Il2CppBase() + 0x16CC99C))(this, reader);
	}

};

