#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GachaProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GachaProgressComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GachaProgressComponent*, uintptr_t))(Il2CppBase() + 0x16028C8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GachaProgressComponent*, uintptr_t))(Il2CppBase() + 0x1602AE0))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(GachaProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x1602B94))(this, targetObject);
	}

};

