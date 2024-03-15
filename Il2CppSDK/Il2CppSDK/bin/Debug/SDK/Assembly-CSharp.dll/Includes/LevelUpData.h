#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelUpData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelUpData"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& NewLevel() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& OldLevel() {
		return *(R*)((uintptr_t)this + 0xC);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LevelUpData*, uintptr_t))(Il2CppBase() + 0x142BCF4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LevelUpData*, uintptr_t))(Il2CppBase() + 0x142BD58))(this, reader);
	}

};

