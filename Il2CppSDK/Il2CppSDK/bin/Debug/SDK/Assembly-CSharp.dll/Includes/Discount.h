#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Discount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Discount"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Percent() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& ShowOnlyPercent() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Discount*, uintptr_t))(Il2CppBase() + 0xE9AAF4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Discount*, uintptr_t))(Il2CppBase() + 0xE9AB6C))(this, reader);
	}

};

