#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SinglePlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SinglePlaceComponent"));
	}

	template <typename R = float> R& Radius() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& OwnMaxCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& GlobalMaxCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SinglePlaceComponent*, Il2CppObject*))(Il2CppBase() + 0x1480864))(this, target);
	}

};

