#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Discount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Discount"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ProductId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Percent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowOnlyPercent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Discount*, uintptr_t))(Il2CppBase() + 0xE9AAF4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Discount*, uintptr_t))(Il2CppBase() + 0xE9AB6C))(this, reader);
	}

};

}
