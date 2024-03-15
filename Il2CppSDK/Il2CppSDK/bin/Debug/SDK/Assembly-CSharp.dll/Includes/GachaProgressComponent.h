#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GachaProgressComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GachaProgressComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<GachaResources*>*> R& Data() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GachaProgressComponent*, uintptr_t))(Il2CppBase() + 0x16028C8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GachaProgressComponent*, uintptr_t))(Il2CppBase() + 0x1602AE0))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GachaProgressComponent*, Il2CppObject*))(Il2CppBase() + 0x1602B94))(this, targetObject);
	}

};

