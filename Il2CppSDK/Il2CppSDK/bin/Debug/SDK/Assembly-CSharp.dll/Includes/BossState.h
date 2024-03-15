#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossState"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& RandomSeed() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int64_t> R& ClosedTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BossState*, uintptr_t))(Il2CppBase() + 0xEEC3FC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BossState*, uintptr_t))(Il2CppBase() + 0xEEC464))(this, reader);
	}

};

