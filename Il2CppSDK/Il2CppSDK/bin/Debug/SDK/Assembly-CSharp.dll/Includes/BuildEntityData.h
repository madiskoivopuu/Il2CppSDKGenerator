#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityData"));
	}

	template <typename R = Il2CppString*> R& Recipe() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BuildEntityData*, uintptr_t))(Il2CppBase() + 0x15A4194))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BuildEntityData*, uintptr_t))(Il2CppBase() + 0x15A4218))(this, reader);
	}

};

