#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossState"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RandomSeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int64_t> T& ClosedTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BossState*, uintptr_t))(Il2CppBase() + 0xEEC3FC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BossState*, uintptr_t))(Il2CppBase() + 0xEEC464))(this, reader);
	}

};

