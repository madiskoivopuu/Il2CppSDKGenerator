#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneChangedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneChangedData"));
	}

	template <typename R = PlayerClassType*> R& ClassType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& FromClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& FromClassBlueprint() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& FromClassEndTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ToClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ToClassBlueprint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& ToClassEndTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsMerge() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClassRuneChangedData*, uintptr_t))(Il2CppBase() + 0x159BABC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClassRuneChangedData*, uintptr_t))(Il2CppBase() + 0x159BB70))(this, reader);
	}

};

