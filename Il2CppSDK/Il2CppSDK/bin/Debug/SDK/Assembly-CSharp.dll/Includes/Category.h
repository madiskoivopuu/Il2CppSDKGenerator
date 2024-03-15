#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Category
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Category"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Priority() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& AltPriority() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Badge() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& BadgeColor() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Category*, uintptr_t))(Il2CppBase() + 0x1117F44))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Category*, uintptr_t))(Il2CppBase() + 0x1117FCC))(this, reader);
	}

};

